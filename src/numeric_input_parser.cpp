#include "numeric_input_parser.hpp"


void NumericInputParser::check_correctness_of_input ( const std::string& input ) const {
    InputValidator* validator = new NumericInputValidator();

    if( !validator->does_input_have_right_size(input, 1, 8) ) {
        delete validator;
        throw std::invalid_argument("the input has an invalid size");
    }
    if( !validator->is_input_correct(input) ) {
        delete validator;
        throw std::invalid_argument("the input is not a number");
    }

    delete validator;
}



uint32_t NumericInputParser::parse_string_to_uint32(const std::string &input) const {
    check_correctness_of_input(input);

    uint32_t result {0};

    for(auto iterator = input.cbegin(); iterator != input.cend(); ++iterator) {
        result = result * 10 + (*iterator - '0');
    }

    return result;
}
