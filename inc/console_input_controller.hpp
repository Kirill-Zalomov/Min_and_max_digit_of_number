#ifndef CONSOLE_INPUT_CONTROLLER_HPP
#define CONSOLE_INPUT_CONTROLLER_HPP


#include "abstraction/input_controller.hpp"


#include <string>
#include <iostream>
#include <ncurses.h>


#define ENTER     (static_cast<char>( 10))
#define BACKSPACE (static_cast<char>(127))


class ConsoleInputCotroller : public InputController {

    // Методы
    public: void print_message(const std::string &message) const override;
    public: void read_message(std::string &buffer, const size_t &input_size) const override;
    public: char get_symbol_without_echo() const;
    public: void print_symbol(const char &symbol) const;

};


#endif // CONSOLE_INPUT_CONTROLLER_HPP
