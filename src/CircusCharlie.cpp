#include <curses.h>
#include <iostream>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{

    initscr();

    int x, y;

    getmaxyx(stdscr, y, x); // screen -> scr
    box(stdscr, 'E', 'L');
    refresh();
    sleep(10);

    endwin();

    return 0;
}
