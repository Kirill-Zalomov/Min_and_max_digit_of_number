#ifndef CONSOLE_INPUT_CONTROLLER_HPP
#define CONSOLE_INPUT_CONTROLLER_HPP


#include "abstraction/input_controller.hpp"


class ConsoleInputCotroller : public InputController {

    // Конструкторы и операторы
    public: ConsoleInputCotroller();


    // Методы
    public: void print_message(const std::string &message) const override;
    public: void read_message(std::string &buffer, const size_t &input_size) const override;
    private: wchar_t get_symbol_without_echo();
    private: void print_symbol(const wchar_t &symbol);

};


#endif // CONSOLE_INPUT_CONTROLLER_HPP
