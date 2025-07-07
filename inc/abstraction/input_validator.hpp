#ifndef INPUT_VALIDATOR_HPP
#define INPUT_VALIDATOR_HPP


#include <string>


class InputValidator {

    // Конструкторы и операторы
    public: virtual ~InputValidator() = default;


    // Методы
    public: virtual bool is_input_correct(const std::string &input) const = 0;
    public: virtual bool does_input_have_right_size(const std::string &input, const size_t &min_size, const size_t &max_size) const = 0;

};


#endif // #ifndef INPUT_VALIDATOR_HPP

