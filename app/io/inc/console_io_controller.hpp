#ifndef CONSOLE_IO_CONTROLLER_HPP
#define CONSOLE_IO_CONTROLLER_HPP


#include "console_input_controller.hpp"
#include "console_output_controller.hpp"


class ConsoleIOCotroller : public ConsoleInputController, public ConsoleOutputController {};


#endif // CONSOLE_IO_CONTROLLER_HPP
