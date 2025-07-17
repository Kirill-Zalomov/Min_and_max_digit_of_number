#ifndef MIN_MAX_CONSOLE_APPLICATION_HPP
#define MIN_MAX_CONSOLE_APPLICATION_HPP


#include "interfaces/application.hpp"
#include "io/inc/console_io_controller.hpp"
#include "bl/inc/validator_of_string_with_positive_number.hpp"
#include "bl/inc/positive_number_parser.hpp"
#include "bl/inc/min_max_digit_finder.hpp"


#include <string>
#include <cstdint>
#include <ncurses.h>
#include <optional>


class MinMaxConsoleApplication : private Application {

    // Поля
    private: ConsoleIOCotroller console_;
    private: ValidatorOfStringWithPositiveNumber input_validator_;
    private: PositiveNumberParser input_parser_;
    private: MinMaxDigitFinder min_max_finder_;

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
