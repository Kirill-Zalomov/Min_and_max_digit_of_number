#ifndef MIN_MAX_FINDER_HPP
#define MIN_MAX_FINDER_HPP


#include <cstdint>


class MinMaxFinder {

    public: MinMaxFinder();
    public: uint8_t find_min_digit(const uint32_t &number);
    public: uint8_t find_max_digit(const uint32_t &number);

};


#endif // MIN_MAX_FINDER_HPP
