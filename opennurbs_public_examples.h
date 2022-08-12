/*
// Copyright (c) 1993-2017 Robert McNeel & Associates. All rights reserved.
// OpenNURBS, Rhinoceros, and Rhino3D are registered trademarks of Robert
// McNeel & Assoicates.
//
// THIS SOFTWARE IS PROVIDED "AS IS" WITHOUT EXPRESS OR IMPLIED WARRANTY.
// ALL IMPLIED WARRANTIES OF FITNESS FOR ANY PARTICULAR PURPOSE AND OF
// MERCHANTABILITY ARE HEREBY DISCLAIMED.
//				
// For complete openNURBS copyright information see <http://www.opennurbs.org>.
//
////////////////////////////////////////////////////////////////
*/

#if !defined(OPENNURBS_PUBLIC_EXAMPLES_INC_)
#define OPENNURBS_PUBLIC_EXAMPLES_INC_

// If "OPENNURBS_IMPORTS" is defined, then the example programs
// dynamically link with opennurbs_public.dll (Windows DLL).
//
// Otherwise, the example programs statically link with opennurbs_public_staticlib.lib.

//#define OPENNURBS_IMPORTS

#include "opennurbs_public.h"

#if defined(ON_COMPILER_MSC)
// Microsoft Compiler linking pragmas

#if defined(OPENNURBS_EXPORTS) || defined(ON_COMPILING_OPENNURBS)
// If you get the following error, your compiler settings
// indicate you are building an opennurbs library.
// This file is used for linking with opennurbs libraries
// that have been previously built.
#error This file contains linking pragmas for using the opennurbs library.
#endif


#endif

#endif
