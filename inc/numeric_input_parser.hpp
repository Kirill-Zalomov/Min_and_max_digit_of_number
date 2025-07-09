#ifndef INPUT_PARSER_HPP
#define INPUT_PARSER_HPP


#include <string>
#include <cstdint>
#include <stdexcept>


#include "numeric_input_validator.hpp"


class NumericInputParser {

    // Методы
    public:  uint32_t parse_string_to_uint32(const std::string &input) const;
    private: void check_correctness_of_input(const std::string &input) const;

};


#endif // INPUT_PARSER_HPP
