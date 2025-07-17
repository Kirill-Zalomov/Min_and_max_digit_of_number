#ifndef MIN_DIGIT_FINDER
#define MIN_DIGIT_FINDER


#include <cstdint>


class MinDigitFinder {

    // Конструктоуры и деструкторы
    public: virtual ~MinDigitFinder() = default;


    // Методы
    public: virtual uint8_t find_min_digit(uint32_t number) const noexcept = 0;

};


#endif // MIN_DIGIT_FINDER

