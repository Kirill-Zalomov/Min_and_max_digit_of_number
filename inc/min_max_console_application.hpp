#ifndef MIN_MAX_CONSOLE_APPLICATION_HPP
#define MIN_MAX_CONSOLE_APPLICATION_HPP


#include "abstraction/application.hpp"
#include "console_input_controller.hpp"
#include "numeric_input_validator.hpp"
#include "input_parser.hpp"
#include "min_max_finder.hpp"


#include <string>
#include <ncurses.h>


class MinMaxConsoleApplication : private Application {

    // Методы
    private: void init() override;
    public: int run() override;

};


#endif // MIN_MAX_CONSOLE_APPLICATION_HPP
