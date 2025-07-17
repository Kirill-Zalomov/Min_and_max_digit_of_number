#ifndef NUMERIC_INPUT_VALIDATOR
#define NUMERIC_INPUT_VALIDATOR


#include <stdexcept>


#include "interfaces/string_validator.hpp"


class ValidatorOfStringWithPositiveNumber : public StringValidator {

    // Методы
    public: bool is_content_valid( const std::string &input ) const noexcept override;
    public: bool does_content_have_right_size( const std::string &input, size_t min_size, size_t max_size ) const override;
    public: bool is_digit ( char symbol ) const noexcept;

};


#endif // NUMERIC_INPUT_VALIDATOR
