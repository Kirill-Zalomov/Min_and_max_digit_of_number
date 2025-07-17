#include "console_output_controller.hpp"


void ConsoleOutputController::print_line ( const std::string &message ) const {
    echo();
    printw("%s", message.c_str());
    noecho();
}


void ConsoleOutputController::print_symbol ( const char &symbol ) const {
    echo();
    if(symbol == BACKSPACE) {
        int x = getcurx(stdscr);
        int y = getcury(stdscr);

        move(y, x - 1);
        addch(' ');
        move(y, x - 1);
    }
    else {
        addch(symbol);
    }


    refresh();
    noecho();
}
