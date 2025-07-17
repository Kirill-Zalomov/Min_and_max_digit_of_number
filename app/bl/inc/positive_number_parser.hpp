#ifndef NUMERIC_PARSER_HPP
#define NUMERIC_PARSER_HPP


#include <string>
#include <cstdint>
#include <stdexcept>
#include <optional>


#include "interfaces/parser.hpp"


class PositiveNumberParser : public Parser<uint32_t> {

    // Методы
    public: std::optional<uint32_t> parse(const std::string& input) const override;

};


#endif // NUMERIC_PARSER_HPP




// class NumericParser : public Parser<uint32_t> {
// public:
//     std::optional<uint32_t> parse(const std::string& input) const override {
//         try {
//             size_t pos = 0;
//             unsigned long value = std::stoul(input, &pos);
//
//             // Проверяем, что вся строка была обработана и число влезает в uint32_t
//             if (pos != input.size() || value > UINT32_MAX) {
//                 return std::nullopt;
//             }
//             return static_cast<uint32_t>(value);
//         } catch (...) {  // stoul может кинуть исключение
//             return std::nullopt;
//         }
//     }
// };
