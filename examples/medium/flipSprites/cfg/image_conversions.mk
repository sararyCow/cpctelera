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

############################################################################
##                        CPCTELERA ENGINE                                ##
##                 Automatic image conversion file                        ##
##------------------------------------------------------------------------##
## This file is intended for users to automate image conversion from JPG, ##
## PNG, GIF, etc. into C-arrays.                                          ##
##                                                                        ##
## Macro used for conversion is IMG2SPRITES, which has up to 9 parameters:##
##  (1): Image file to be converted into C sprite (PNG, JPG, GIF, etc)    ##
##  (2): Graphics mode (0,1,2) for the generated C sprite                 ##
##  (3): Prefix to add to all C-identifiers generated                     ##
##  (4): Width in pixels of each sprite/tile/etc that will be generated   ##
##  (5): Height in pixels of each sprite/tile/etc that will be generated  ##
##  (6): Firmware palette used to convert the image file into C values    ##
##  (7): (mask / tileset /)                                               ##
##     - "mask":    generate interlaced mask for all sprites converted    ##
##     - "tileset": generate a tileset array with pointers to all sprites ##
##  (8): Output subfolder for generated .C/.H files (in project folder)   ##
##  (9): (hwpalette)                                                      ##
##     - "hwpalette": output palette array with hardware colour values    ##
##                                                                        ##
## Macro is used in this way (one line for each image to be converted):   ##
##  $(eval $(call IMG2SPRITES,(1),(2),(3),(4),(5),(6),(7),(8),(9)))       ##
##                                                                        ##
## Important:                                                             ##
##  * Do NOT separate macro parameters with spaces, blanks or other chars.##
##    ANY character you put into a macro parameter will be passed to the  ##
##    macro. Therefore ...,src/sprites,... will represent "src/sprites"   ##
##    folder, whereas ...,  src/sprites,... means "  src/sprites" folder. ##
##                                                                        ##
##  * You can omit parameters but leaving them empty. Therefore, if you   ##
##  wanted to specify an output folder but do not want your sprites to    ##
##  have mask and/or tileset, you may omit parameter (7) leaving it empty ##
##     $(eval $(call IMG2SPRITES,imgs/1.png,0,g,4,8,$(PAL),,src/))        ##
############################################################################

## Firmware palette definition in cpct_img2tileset format
PALETTE={0 1 4 12 13 16 25 26}

## Convert spirit.png into spirit.c and spirit.h
##   This is a mode 0, 46x54 pixels sprite. The image will be converted 
## into a C-array called g_spirit (g is prefix for _spirit) without interlaced
## mask. Conversion will also output an array called g_palette with the 16
## hardware colour values that define the given PALETTE.
$(eval $(call IMG2SPRITES,src/spirit.png,0,g,46,54,$(PALETTE),,,hwpalette))