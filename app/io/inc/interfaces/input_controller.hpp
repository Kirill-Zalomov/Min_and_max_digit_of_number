#ifndef INPUT_CONTROLLER_HPP
#define INPUT_CONTROLLER_HPP


#include <string>


class InputController {

    public: virtual ~InputController() = default;


    public: virtual void read_line(std::string &buffer, const size_t &input_size) const = 0;
    public: virtual char read_symbol_without_echo() const = 0;

};


#endif // INPUT_CONTROLLER_HPP
