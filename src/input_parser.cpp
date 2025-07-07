#include "input_parser.hpp"


uint32_t InputParser::parse_string_to_uint32(const std::string &input) const {
    std::unique_ptr<InputValidator> validator = std::make_unique<NumericInputValidator>();

    if( !validator->does_input_have_right_size(input, 1, 8) ) {
        throw std::invalid_argument("the input has an invalid size");
    }
    if( !validator->is_input_correct(input) ) {
        throw std::invalid_argument("the input is not a number");
    }

    uint32_t result {0};

    for(auto iterator = input.cbegin(); iterator != input.cend(); ++iterator) {
        result = result * 10 + (*iterator - '0');
    }

    return result;
}
