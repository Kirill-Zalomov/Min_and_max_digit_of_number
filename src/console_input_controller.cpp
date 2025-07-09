#include "console_input_controller.hpp"



void ConsoleInputCotroller::print_message ( const std::string &message ) const {
    echo();
    printw("%s", message.c_str());
    noecho();
}


void ConsoleInputCotroller::read_message ( std::string &buffer, const size_t &input_size ) const {
    echo();
    char char_buffer[input_size];
    getnstr(char_buffer, input_size);
    buffer = std::string(char_buffer);
    noecho();
}


char ConsoleInputCotroller::get_symbol_without_echo() const {
    noecho();
    char result = static_cast<char>(getch());
    echo();
    return result;
}


void ConsoleInputCotroller::print_symbol ( const char &symbol ) const {
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
