#include <curses.h>

int main()
{
    int c = ' ';
    int i = 0;

    initscr();
    cbreak();
    noecho();

    mvprintw(0, 0, "Press 'q' to quit\n");
    refresh();

    while (c != 'q') {
        if (kbhit()) {
            c = getch();
            mvprintw(1, 0, "got char '%c' on interaction %d\n", c, ++i);
            refresh();
        }
    }

    nocbreak();
    echo();
    endwin();
}
