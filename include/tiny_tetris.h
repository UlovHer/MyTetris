#ifndef _TINY_TETRIS_H_
#define _TINY_TETRIS_H_
#include <ctime>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "curses.h"
void new_piece();
void frame();
void set_piece(int x, int y, int r, int v);
void update_piece();
void remove_line();
int check_hit(int x, int y, int r);
int do_tick();
void runloop();
#endif