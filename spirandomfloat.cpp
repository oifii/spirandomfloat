/*
 * Copyright (c) 2010-2016 Stephane Poirier
 *
 * stephane.poirier@oifii.org
 *
 * Stephane Poirier
 * 3532 rue Ste-Famille, #3
 * Montreal, QC, H2X 2L1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// spirandomfloat.cpp : Defines the entry point for the console application.
//
//ref.
//http://www.rgba.org/articles/sfrand/sfrand.htm
//

#include "stdafx.h"

static unsigned int mirand = 1;

float sfrand( void )
{
    unsigned int a;

    mirand *= 16807;

    a = (mirand&0x007fffff) | 0x40000000;

    return( *((float*)&a) - 3.0f );
}

int _tmain(int argc, _TCHAR* argv[])
{
	//no initialization?

	for(int ii=0; ii<100; ii++)
	{
		printf("%f\n",sfrand());
	}
	return 0;
}

