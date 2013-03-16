/* 
 * Copyright (C) 2013 Fabio Olimpieri
 * This file is part of FBZX Wii
 *
 * FBZX Wii is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * FBZX Wii is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef H_TAPE_BROWSER
#define H_TAPE_BROWSER

#define MAX_BROWSER_ITEM 1000


struct browser {
	unsigned int position;
	char block_type[24];
	char info[32]; 
};

extern struct browser *browser_list[MAX_BROWSER_ITEM+1];

void browser_tap (FILE *);
void browser_tzx (FILE *);

#endif