//-----------------------------LICENSE NOTICE------------------------------------
//  This file is part of CPCtelera: An Amstrad CPC Game Engine 
//  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//-------------------------------------------------------------------------------

#ifndef _TRANSPARENCY_TABLES_MODE1_H
#define _TRANSPARENCY_TABLES_MODE1_H

//----------------------------------------------------------------------------------------
// Title: Transparency Tables for Mode 1
//----------------------------------------------------------------------------------------

//
// Macro: CPCTM_MASKTABLE0M1
//    256-table (assembly definition) with mask values for mode 1 using pen 0 as transparent
//
#define CPCTM_MASKTABLE0M1 \
      .db 0xFF, 0xEE, 0xDD, 0xCC, 0xBB, 0xAA, 0x99, 0x88 \
      .db 0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00 \
      .db 0xEE, 0xEE, 0xCC, 0xCC, 0xAA, 0xAA, 0x88, 0x88 \
      .db 0x66, 0x66, 0x44, 0x44, 0x22, 0x22, 0x00, 0x00 \
      .db 0xDD, 0xCC, 0xDD, 0xCC, 0x99, 0x88, 0x99, 0x88 \
      .db 0x55, 0x44, 0x55, 0x44, 0x11, 0x00, 0x11, 0x00 \
      .db 0xCC, 0xCC, 0xCC, 0xCC, 0x88, 0x88, 0x88, 0x88 \
      .db 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00 \
      .db 0xBB, 0xAA, 0x99, 0x88, 0xBB, 0xAA, 0x99, 0x88 \
      .db 0x33, 0x22, 0x11, 0x00, 0x33, 0x22, 0x11, 0x00 \
      .db 0xAA, 0xAA, 0x88, 0x88, 0xAA, 0xAA, 0x88, 0x88 \
      .db 0x22, 0x22, 0x00, 0x00, 0x22, 0x22, 0x00, 0x00 \
      .db 0x99, 0x88, 0x99, 0x88, 0x99, 0x88, 0x99, 0x88 \
      .db 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00 \
      .db 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
      .db 0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00 \
      .db 0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00 \
      .db 0x66, 0x66, 0x44, 0x44, 0x22, 0x22, 0x00, 0x00 \
      .db 0x66, 0x66, 0x44, 0x44, 0x22, 0x22, 0x00, 0x00 \
      .db 0x55, 0x44, 0x55, 0x44, 0x11, 0x00, 0x11, 0x00 \
      .db 0x55, 0x44, 0x55, 0x44, 0x11, 0x00, 0x11, 0x00 \
      .db 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00 \
      .db 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00 \
      .db 0x33, 0x22, 0x11, 0x00, 0x33, 0x22, 0x11, 0x00 \
      .db 0x33, 0x22, 0x11, 0x00, 0x33, 0x22, 0x11, 0x00 \
      .db 0x22, 0x22, 0x00, 0x00, 0x22, 0x22, 0x00, 0x00 \
      .db 0x22, 0x22, 0x00, 0x00, 0x22, 0x22, 0x00, 0x00 \
      .db 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00 \
      .db 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

//
// Macro: CPCTM_MASKTABLE1M1
//    256-table (assembly definition) with mask values for mode 1 using pen 1 as transparent
//
#define CPCTM_MASKTABLE1M1 \
      .db 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77 \
      .db 0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF \
      .db 0x00, 0x00, 0x22, 0x22, 0x44, 0x44, 0x66, 0x66 \
      .db 0x88, 0x88, 0xAA, 0xAA, 0xCC, 0xCC, 0xEE, 0xEE \
      .db 0x00, 0x11, 0x00, 0x11, 0x44, 0x55, 0x44, 0x55 \
      .db 0x88, 0x99, 0x88, 0x99, 0xCC, 0xDD, 0xCC, 0xDD \
      .db 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44 \
      .db 0x88, 0x88, 0x88, 0x88, 0xCC, 0xCC, 0xCC, 0xCC \
      .db 0x00, 0x11, 0x22, 0x33, 0x00, 0x11, 0x22, 0x33 \
      .db 0x88, 0x99, 0xAA, 0xBB, 0x88, 0x99, 0xAA, 0xBB \
      .db 0x00, 0x00, 0x22, 0x22, 0x00, 0x00, 0x22, 0x22 \
      .db 0x88, 0x88, 0xAA, 0xAA, 0x88, 0x88, 0xAA, 0xAA \
      .db 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11 \
      .db 0x88, 0x99, 0x88, 0x99, 0x88, 0x99, 0x88, 0x99 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
      .db 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88 \
      .db 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77 \
      .db 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77 \
      .db 0x00, 0x00, 0x22, 0x22, 0x44, 0x44, 0x66, 0x66 \
      .db 0x00, 0x00, 0x22, 0x22, 0x44, 0x44, 0x66, 0x66 \
      .db 0x00, 0x11, 0x00, 0x11, 0x44, 0x55, 0x44, 0x55 \
      .db 0x00, 0x11, 0x00, 0x11, 0x44, 0x55, 0x44, 0x55 \
      .db 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44 \
      .db 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44 \
      .db 0x00, 0x11, 0x22, 0x33, 0x00, 0x11, 0x22, 0x33 \
      .db 0x00, 0x11, 0x22, 0x33, 0x00, 0x11, 0x22, 0x33 \
      .db 0x00, 0x00, 0x22, 0x22, 0x00, 0x00, 0x22, 0x22 \
      .db 0x00, 0x00, 0x22, 0x22, 0x00, 0x00, 0x22, 0x22 \
      .db 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11 \
      .db 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

//
// Macro: CPCTM_MASKTABLE2M1
//    256-table (assembly definition) with mask values for mode 1 using pen 2 as transparent
//
#define CPCTM_MASKTABLE2M1 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
      .db 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00 \
      .db 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00 \
      .db 0x22, 0x22, 0x00, 0x00, 0x22, 0x22, 0x00, 0x00 \
      .db 0x22, 0x22, 0x00, 0x00, 0x22, 0x22, 0x00, 0x00 \
      .db 0x33, 0x22, 0x11, 0x00, 0x33, 0x22, 0x11, 0x00 \
      .db 0x33, 0x22, 0x11, 0x00, 0x33, 0x22, 0x11, 0x00 \
      .db 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00 \
      .db 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00 \
      .db 0x55, 0x44, 0x55, 0x44, 0x11, 0x00, 0x11, 0x00 \
      .db 0x55, 0x44, 0x55, 0x44, 0x11, 0x00, 0x11, 0x00 \
      .db 0x66, 0x66, 0x44, 0x44, 0x22, 0x22, 0x00, 0x00 \
      .db 0x66, 0x66, 0x44, 0x44, 0x22, 0x22, 0x00, 0x00 \
      .db 0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00 \
      .db 0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00 \
      .db 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
      .db 0x99, 0x88, 0x99, 0x88, 0x99, 0x88, 0x99, 0x88 \
      .db 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00 \
      .db 0xAA, 0xAA, 0x88, 0x88, 0xAA, 0xAA, 0x88, 0x88 \
      .db 0x22, 0x22, 0x00, 0x00, 0x22, 0x22, 0x00, 0x00 \
      .db 0xBB, 0xAA, 0x99, 0x88, 0xBB, 0xAA, 0x99, 0x88 \
      .db 0x33, 0x22, 0x11, 0x00, 0x33, 0x22, 0x11, 0x00 \
      .db 0xCC, 0xCC, 0xCC, 0xCC, 0x88, 0x88, 0x88, 0x88 \
      .db 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00 \
      .db 0xDD, 0xCC, 0xDD, 0xCC, 0x99, 0x88, 0x99, 0x88 \
      .db 0x55, 0x44, 0x55, 0x44, 0x11, 0x00, 0x11, 0x00 \
      .db 0xEE, 0xEE, 0xCC, 0xCC, 0xAA, 0xAA, 0x88, 0x88 \
      .db 0x66, 0x66, 0x44, 0x44, 0x22, 0x22, 0x00, 0x00 \
      .db 0xFF, 0xEE, 0xDD, 0xCC, 0xBB, 0xAA, 0x99, 0x88 \
      .db 0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00

//
// Macro: CPCTM_MASKTABLE3M1
//    256-table (assembly definition) with mask values for mode 1 using pen 3 as transparent
//
#define CPCTM_MASKTABLE3M1 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
      .db 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11 \
      .db 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11 \
      .db 0x00, 0x00, 0x22, 0x22, 0x00, 0x00, 0x22, 0x22 \
      .db 0x00, 0x00, 0x22, 0x22, 0x00, 0x00, 0x22, 0x22 \
      .db 0x00, 0x11, 0x22, 0x33, 0x00, 0x11, 0x22, 0x33 \
      .db 0x00, 0x11, 0x22, 0x33, 0x00, 0x11, 0x22, 0x33 \
      .db 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44 \
      .db 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44 \
      .db 0x00, 0x11, 0x00, 0x11, 0x44, 0x55, 0x44, 0x55 \
      .db 0x00, 0x11, 0x00, 0x11, 0x44, 0x55, 0x44, 0x55 \
      .db 0x00, 0x00, 0x22, 0x22, 0x44, 0x44, 0x66, 0x66 \
      .db 0x00, 0x00, 0x22, 0x22, 0x44, 0x44, 0x66, 0x66 \
      .db 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77 \
      .db 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77 \
      .db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
      .db 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88 \
      .db 0x00, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x11 \
      .db 0x88, 0x99, 0x88, 0x99, 0x88, 0x99, 0x88, 0x99 \
      .db 0x00, 0x00, 0x22, 0x22, 0x00, 0x00, 0x22, 0x22 \
      .db 0x88, 0x88, 0xAA, 0xAA, 0x88, 0x88, 0xAA, 0xAA \
      .db 0x00, 0x11, 0x22, 0x33, 0x00, 0x11, 0x22, 0x33 \
      .db 0x88, 0x99, 0xAA, 0xBB, 0x88, 0x99, 0xAA, 0xBB \
      .db 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44 \
      .db 0x88, 0x88, 0x88, 0x88, 0xCC, 0xCC, 0xCC, 0xCC \
      .db 0x00, 0x11, 0x00, 0x11, 0x44, 0x55, 0x44, 0x55 \
      .db 0x88, 0x99, 0x88, 0x99, 0xCC, 0xDD, 0xCC, 0xDD \
      .db 0x00, 0x00, 0x22, 0x22, 0x44, 0x44, 0x66, 0x66 \
      .db 0x88, 0x88, 0xAA, 0xAA, 0xCC, 0xCC, 0xEE, 0xEE \
      .db 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77 \
      .db 0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF

#endif
