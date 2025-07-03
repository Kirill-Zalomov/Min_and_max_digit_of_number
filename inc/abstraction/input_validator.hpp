#ifndef INPUT_VALIDATOR_HPP
#define INPUT_VALIDATOR_HPP


#include <string>


class InputValidator {

    // Конструкторы и операторы
    public: InputValidator();
    public: virtual ~InputValidator();


    // Методы
    public: virtual bool is_input_correct(const std::string &input) const;
    public: virtual bool does_input_have_rigth_size(const std::string &input, const size_t &min_size, const size_t &max_size) const;

};


#endif // #ifndef INPUT_VALIDATOR_HPP

