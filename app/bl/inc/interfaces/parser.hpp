#ifndef PARSER_HPP
#define PARSER_HPP


#include <optional>
#include <string>


template <typename T>
class Parser {

    public: virtual ~Parser() = default;
    public: virtual std::optional<T> parse(const std::string& input) const = 0;

};


#endif // PARSER_HPP
