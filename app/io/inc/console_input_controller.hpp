#ifndef CONSOLE_INPUT_CONTROLLER_HPP
#define CONSOLE_INPUT_CONTROLLER_HPP


#include "interfaces/input_controller.hpp"
#include "interfaces/keys.hpp"


#include <string>
#include <iostream>
#include <ncurses.h>


class ConsoleInputController : public InputController {

    public: void read_line(std::string &buffer, const size_t &input_size) const override;
    public: char read_symbol_without_echo() const override;

};


#endif // CONSOLE_INPUT_CONTROLLER_HPP

