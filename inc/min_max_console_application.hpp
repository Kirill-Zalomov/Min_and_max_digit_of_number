#ifndef MIN_MAX_CONSOLE_APPLICATION_HPP
#define MIN_MAX_CONSOLE_APPLICATION_HPP


#include "abstraction/application.hpp"
#include "console_input_controller.hpp"
#include "numeric_input_validator.hpp"
#include "numeric_input_parser.hpp"
#include "min_max_finder.hpp"


#include <string>
#include <ncurses.h>


class MinMaxConsoleApplication : private Application {

    // Поля
    private: ConsoleInputCotroller console_;
    private: NumericInputValidator input_validator_;
    private: NumericInputParser input_parser_;
    private: MinMaxFinder min_max_finder_;
    private: std::string user_input_;
    private: uint32_t number_;
    private: uint8_t  max_digit_;
    private: uint8_t  min_digit_;


    // Конструкторы, деструкторы и операторы
    public: MinMaxConsoleApplication();


    // Методы
    public: int run() override;

    private: void init() override;
    private: void print_invitation_message();
    private: void get_user_input();
    private: void process_user_input();
    private: void print_result();

};


#endif // MIN_MAX_CONSOLE_APPLICATION_HPP
