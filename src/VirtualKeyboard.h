/*********************************************************************
 * Copyright (C) 2012,  Fabio Olimpieri
 * Copyright (C) 2009,  Simon Kagstrom
 *
 * Filename:      VirtualKeyboard.h
 * 
 * Description:   A virtual keyboard
 *
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
 ********************************************************************/
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>

typedef struct virtkey
{
	const char *name; //It is not necessary in FBZX Wii
	const char *ev_name; //It is not necessary in FBZX Wii
	int sdl_code;
	int is_done;
	int caps_on;
	int sym_on;
} virtkey_t;


struct Virtual_Keyboard
{
	SDL_Surface *screen;
	TTF_Font *font;
	int sel_x;
	int sel_y;
	char buf[255];
	
} VirtualKeyboard;

void VirtualKeyboard_init(SDL_Surface *screen, TTF_Font *font);
struct virtkey* get_key();
struct virtkey* get_key_internal();
void draw();
void select_next_kb(int dx, int dy);
void toggle_shift();

