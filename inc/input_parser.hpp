#ifndef INPUT_PARSER_HPP
#define INPUT_PARSER_HPP


#include <string>
#include <cstdint>
#include <memory>
#include <stdexcept>


#include "numeric_input_validator.hpp"


class InputParser {

    // Методы
    public: uint32_t parse_string_to_uint32(const std::string &input) const;

};


#endif // INPUT_PARSER_HPP
