#include "min_max_digit_finder.hpp"


uint8_t MinMaxDigitFinder::find_min_digit(uint32_t number) const noexcept {
    uint8_t current_digit {0};
    uint8_t min_digit {9};

    do {
        current_digit = static_cast<uint8_t>(number % 10);
        if(current_digit < min_digit) {
            min_digit = current_digit;
        }
        number /= 10;
    } while(number != 0);

    return min_digit;
}


uint8_t MinMaxDigitFinder::find_max_digit(uint32_t number) const noexcept {
    uint8_t current_digit {0};
    uint8_t max_digit {0};

    do {
        current_digit = static_cast<uint8_t>(number % 10);
        if(current_digit > max_digit) {
            max_digit = current_digit;
        }
        number /= 10;
    } while(number != 0);

    return max_digit;
}
