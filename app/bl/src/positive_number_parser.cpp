#include "positive_number_parser.hpp"


std::optional<uint32_t> PositiveNumberParser::parse(const std::string &input) const {
    uint32_t result {0};

    for(auto iterator = input.cbegin(); iterator != input.cend(); ++iterator) {
        result = result * 10 + (*iterator - '0');
    }

    return result;
}
