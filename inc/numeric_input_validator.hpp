#ifndef NUMERIC_INPUT_VALIDATOR
#define NUMERIC_INPUT_VALIDATOR


#include "abstraction/input_validator.hpp"


class NumericInputValidator : public InputValidator {

    // Методы
    public: bool is_input_correct(const std::string &input) const override;
    public: bool does_input_have_rigth_size(const std::string &input, const size_t &min_size, const size_t &max_size) const override;

};


#endif // NUMERIC_INPUT_VALIDATOR
