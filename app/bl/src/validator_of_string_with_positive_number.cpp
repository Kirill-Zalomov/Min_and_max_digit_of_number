#include "validator_of_string_with_positive_number.hpp"


bool ValidatorOfStringWithPositiveNumber::is_digit( char symbol ) const noexcept {
    return (symbol >= '0' && symbol <= '9');
}


bool ValidatorOfStringWithPositiveNumber::is_content_valid ( const std::string &input ) const noexcept {
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


bool ValidatorOfStringWithPositiveNumber::does_content_have_right_size ( const std::string &input, size_t min_size, size_t max_size ) const {
    if(min_size > max_size) throw std::invalid_argument("the minimum size cannot be larger than the maximum");
    size_t input_size = input.size();
    return (input_size >= min_size && input_size <= max_size);
}
