#include "menu.h"
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

void Menu()
{
    attron(A_STANDOUT | A_BOLD | A_BLINK);
    attron(COLOR_PAIR(1));
    move(10, 50);
    printw(" 1.New game ");
    move(15, 50);
    printw(" 2.Autors");
    move(20, 50);
    printw(" 3.Exit   ");
}
void Autors()
{
    attron(COLOR_PAIR(1));
    move(15, 50);
    printw("Nikita Lobakin");
    move(20, 50);
    printw("Perelomov Michael");
}