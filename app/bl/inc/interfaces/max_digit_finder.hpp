#ifndef MAX_DIGIT_FINDER
#define MAX_DIGIT_FINDER


#include <cstdint>


class MaxDigitFinder {

    // Конструктоуры и деструкторы
    public: virtual ~MaxDigitFinder() = default;


    // Методы
    public: virtual uint8_t find_max_digit(uint32_t number) const noexcept = 0;

};


#endif // MAX_DIGIT_FINDER
