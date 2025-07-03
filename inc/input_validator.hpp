#ifndef INPUT_VALIDATOR_HPP
#define INPUT_VALIDATOR_HPP


#include <string>


class InputValidator {

    public: InputValidator();
    public: virtual ~InputValidator();
    public: virtual bool is_input_correct(const std::string &input) const noexcept;

};


#endif // #ifndef INPUT_VALIDATOR_HPP

