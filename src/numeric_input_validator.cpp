#include "numeric_input_validator.hpp"


bool NumericInputValidator::is_digit( const char &symbol ) const {
    return (symbol >= '0' && symbol <= '9');
}


bool NumericInputValidator::is_input_correct ( const std::string &input ) const {
    if(input.empty()) return false;

    bool first_symbol = true;
    size_t input_size = input.size();
    for(auto iterator = input.cbegin(); iterator != input.cend(); ++iterator) {
        if(first_symbol) {
            if(!is_digit(*iterator) || ((*iterator == '0') && (input_size > 1))) return false;
            first_symbol = false;
        }
        else{
            if(!is_digit(*iterator)) return false;
        }
    }
    return true;
}


bool NumericInputValidator::does_input_have_right_size ( const std::string &input, const size_t &min_size, const size_t &max_size ) const {
    if(min_size > max_size) throw std::invalid_argument("the minimum size cannot be larger than the maximum");
    size_t input_size = input.size();
    return (input_size >= min_size && input_size <= max_size);
}
