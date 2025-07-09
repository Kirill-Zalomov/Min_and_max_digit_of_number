#ifndef INPUT_CONTROLLER_HPP
#define INPUT_CONTROLLER_HPP


#include <string>


class InputController {

    // Конструкторы и операторы
    public: virtual ~InputController() = default;


    // Методы
    public: virtual void print_message(const std::string &message) const = 0;
    public: virtual void read_message(std::string &buffer, const size_t &input_size) const = 0;

};


#endif // INPUT_CONTROLLER_HPP
