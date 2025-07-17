#ifndef CONSOLE_OUTPUT_CONTROLLER_HPP
#define CONSOLE_OUTPUT_CONTROLLER_HPP


#include "interfaces/output_controller.hpp"
#include "interfaces/keys.hpp"


#include <string>
#include <iostream>
#include <ncurses.h>


class ConsoleOutputController : public OutputController {

    public: void print_line(const std::string &message) const override;
    public: void print_symbol(const char &symbol) const override;

};


#endif // CONSOLE_OUTPUT_CONTROLLER_HPP

