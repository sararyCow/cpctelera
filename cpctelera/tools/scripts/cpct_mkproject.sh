#!/bin/bash
##-----------------------------LICENSE NOTICE------------------------------------
##  This file is part of CPCtelera: An Amstrad CPC Game Engine 
##  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
##
##  This program is free software: you can redistribute it and/or modify
##  it under the terms of the GNU General Public License as published by
##  the Free Software Foundation, either version 3 of the License, or
##  (at your option) any later version.
##
##  This program is distributed in the hope that it will be useful,
##  but WITHOUT ANY WARRANTY; without even the implied warranty of
##  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
##  GNU General Public License for more details.
##
##  You should have received a copy of the GNU General Public License
##  along with this program.  If not, see <http://www.gnu.org/licenses/>.
##------------------------------------------------------------------------------

###########################################################################
##                        CPCTELERA ENGINE                               ##
##                  Script for creating new projects                     ##
##-----------------------------------------------------------------------##
## This script helps in the creation of new projects that use CPCtelera  ##
## engine.                                                               ##
###########################################################################

## Bash Include files
source $(dirname $0)/bash_library.sh

## Initial parameters
PROJECTNAME=
PROJECTDIR=
LOADADDRESS=4000

## Required template files
getFullPath $0 SCRIPT_FULL_PATH
TEMPLATE_DIRECTORY=${SCRIPT_FULL_PATH}/templates
SRC_TEMPLATE=${TEMPLATE_DIRECTORY}/main.c
MAKE_TEMPLATE=${TEMPLATE_DIRECTORY}/Makefile
CFG_TEMPLATE=${TEMPLATE_DIRECTORY}/build_config.mk
ALL_TEMPLATE_FILES=(${SRC_TEMPLATE} ${MAKE_TEMPLATE} ${CFG_TEMPLATE})

## Replacement tags
TAG_PROJECTNAME="%%%PROJECT_NAME%%%"
TAG_LOADADDRESS="%%%CODE_LOAD_ADDRESS%%%"

## Show how this script is to be used and exit
##
function usage() {
   echo "${COLOR_LIGHT_YELLOW}USAGE"
   echo "  ${COLOR_LIGHT_BLUE}$(basename $0) ${COLOR_LIGHT_CYAN}<project_folder> [options]"
   echo
   echo "${COLOR_CYAN}  Creates a fresh new project that uses CPCtelera engine. The new project is created inside\
<project_folder>, so <project_folder> should be a new file name not existing in filesystem."
   echo
   echo "${COLOR_LIGHT_YELLOW}OPTIONS"
   echo "${COLOR_LIGHT_BLUE}  -n | --project-name  ${COLOR_LIGHT_CYAN}<name>"
   echo "${COLOR_CYAN}       Gives a name to the project that is distinct from the <project_folder> name. <name> \
must not contain spaces."
   echo
   echo "${COLOR_LIGHT_BLUE}  -l | --load-address ${COLOR_LIGHT_CYAN}<hexadecimal address>"
   echo "${COLOR_CYAN}       Establishes the hexadecimal address where the binary of the project will be loaded \
inside Amstrad CPC's memory."
   echo 
   echo "${COLOR_LIGHT_BLUE}  -h | --help"
   echo "${COLOR_CYAN}       Shows this help information"
   echo ${COLOR_NORMAL}
   exit 1
}

## Draws an OK checkmark
function drawOK {
   coloredMachineEcho ${COLOR_LIGHT_GREEN} 0.05 " [ OK ]"$'\n'
}

###############################################################
###############################################################
## Check template files are present
##
for F in ${ALL_TEMPLATE_FILES[*]}; do
   EnsureExists file "$F" "It is a template file required to create new projects. Please check that the file \
exists and it has read permission for your user."
done

###############################################################
###############################################################
## Check command line parameters
##

if (( $# < 1 )); then
   usage
fi

while (( $# >= 1 )); do
   case $1 in
      ## Get an specific project name
      "-n" | "--project-name")
         if isEmpty "$2"; then
            paramError "'-n'/'--project-name' options require a valid project name afterwards." 2
         elif isCommandLineOption "$2"; then
            paramError "A valid one-word project name should follow '-n'/'--project-name'" 3
         fi
         PROJECTNAME="$2"
         shift
      ;;
      ## Get Load Address
      "-l" | "--load-address")
         if ! isHex "$2"; then
            paramError "Option -l should be followed by a valid hexadecimal value (load address)" 4
         elif [[ ${#2} > 4 ]]; then
            paramError "LoadAddres (-l) should be between 1 and 4 digits (0000 - FFFF)" 5
         fi
         LOADADDRESS="$2"
         shift
      ;;
      ## Show Help
      "-h" | "--help")
         usage
      ;;
      ## Get main parameter (ProjectDir)
      *)
         if isCommandLineOption "$1"; then
            paramError "Unrecognized command line option '$1'" 7
         elif ! isEmpty "$PROJECTDIR"; then
            paramError "Unrecognized parameter '$1'. Have you already provided a <project_folder> parameter?" 6
         elif [ -e "$1" ]; then
            paramError "'$1' already exist in filesystem. Choose another name for your <project_folder>"
         fi
         PROJECTDIR="$1"
      ;;
   esac
   shift
done

###############################################################
###############################################################
## Some checks
##
if isEmpty "$PROJECTNAME"; then
   PROJECTNAME="$PROJECTDIR"
fi

###############################################################
###############################################################
## Create new project
##

## Objective directory structure
SOURCE_DIR=${PROJECTDIR}/src
CONFIG_DIR=${PROJECTDIR}/cfg
NEW_MAIN=${SOURCE_DIR}/main.c
NEW_BUILD=${CONFIG_DIR}/build_config.mk
NEW_MAKE=${PROJECTDIR}/Makefile

# Welcome message
stageMessage "CPCtelera" "Creating new project in ${COLOR_WHITE}${PROJECTDIR}/"

## Create directory structure
coloredMachineEcho "${COLOR_CYAN}" 0.005 "> Creating project folder structure..."
mkdir -p ${SOURCE_DIR}
mkdir -p ${CONFIG_DIR}
drawOK

## Copy templates substituting tags
coloredMachineEcho "${COLOR_CYAN}" 0.005 "> Copying files from project templates..."
cp ${SRC_TEMPLATE} ${NEW_MAIN}
cp ${CFG_TEMPLATE} ${NEW_BUILD}
cp ${MAKE_TEMPLATE} ${NEW_MAKE}
drawOK

# Configuring project values into CFG_TEMPLATE
coloredMachineEcho "${COLOR_CYAN}" 0.005 "> Configuring project name to: ${COLOR_WHITE}${PROJECTNAME}"
sed -i "/${TAG_PROJECTNAME}/c\PROJNAME   := ${PROJECTNAME}#${TAG_PROJECTNAME}" ${NEW_BUILD}
drawOK

coloredMachineEcho "${COLOR_CYAN}" 0.005 "> Configuring z80 code load address: ${COLOR_WHITE}${LOADADDRESS}"
sed -i "/${TAG_LOADADDRESS}/c\Z80CODELOC := 0x${LOADADDRESS}#${TAG_LOADADDRESS}" ${NEW_BUILD}
drawOK

# Bye Message
stageMessage "CPCtelera" "New project created in ${COLOR_WHITE}${PROJECTDIR}/"
