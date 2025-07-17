#ifndef STRING_VALIDATOR_HPP
#define STRING_VALIDATOR_HPP


#include <string>


class StringValidator {

    // Конструкторы и операторы
    public: virtual ~StringValidator() = default;


    // Методы
    public: virtual bool is_content_valid(const std::string &input) const noexcept = 0;
    public: virtual bool does_content_have_right_size(const std::string &content, size_t min_size, size_t max_size) const = 0;

};


#endif // STRING_VALIDATOR_HPP

