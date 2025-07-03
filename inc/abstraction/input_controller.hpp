#ifndef INPUT_CONTROLLER_HPP
#define INPUT_CONTROLLER_HPP


#include <string>


class InputController {

    // Конструкторы и операторы
    public: InputController();
    public: virtual ~InputController();


    // Методы
    public: virtual void print_message(const std::string &message) const;
    public: virtual void read_message(std::string &buffer, const size_t &input_size) const;

};


#endif // INPUT_CONTROLLER_HPP
