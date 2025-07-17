#ifndef MIN_MAX_FINDER_HPP
#define MIN_MAX_FINDER_HPP


#include <cstdint>


#include "interfaces/max_digit_finder.hpp"
#include "interfaces/min_digit_finder.hpp"


class MinMaxDigitFinder : public MaxDigitFinder, public MinDigitFinder {

    // Методы
    public: uint8_t find_min_digit(uint32_t number) const noexcept override;
    public: uint8_t find_max_digit(uint32_t number) const noexcept override;

};


#endif // MIN_MAX_FINDER_HPP
