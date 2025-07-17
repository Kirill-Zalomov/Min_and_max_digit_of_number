#ifndef OUTPUT_CONTROLLER_HPP
#define OUTPUT_CONTROLLER_HPP


#include <string>


class OutputController {

    public: virtual ~OutputController() = default;


    public: virtual void print_line(const std::string &message) const = 0;
    public: virtual void print_symbol(const char &symbol) const = 0;

};


#endif // OUTPUT_CONTROLLER_HPP

