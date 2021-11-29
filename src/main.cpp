#include "tiny_tetris.h"

// init curses and start runloop
int main()
{
    srand(time(0));
    initscr();
    start_color();
    // colours indexed by their position in the block
    for (int i = 1; i < 8; i++)
    {
        init_pair(i, i, 0);
    }
    new_piece();
    resize_term(22, 22);
    noecho();
    timeout(0);
    curs_set(0);
    box(stdscr, 0, 0);
    runloop();
    endwin();
}