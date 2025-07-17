#include "console_input_controller.hpp"


void ConsoleInputController::read_line ( std::string &buffer, const size_t &input_size ) const {
    echo();
    char char_buffer[input_size];
    getnstr(char_buffer, input_size);
    buffer = std::string(char_buffer);
    noecho();
}


char ConsoleInputController::read_symbol_without_echo() const {
    noecho();
    char result = static_cast<char>(getch());
    echo();
    return result;
}
