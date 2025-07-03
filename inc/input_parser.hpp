#ifndef INPUT_PARSER_HPP
#define INPUT_PARSER_HPP


#include <string>
#include <cstdint>


class InputParser {

    InputParser();
    uint32_t parse_string_to_uint32(const std::string &input) const;

};


#endif // INPUT_PARSER_HPP
