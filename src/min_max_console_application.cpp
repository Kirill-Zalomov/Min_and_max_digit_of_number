#include "min_max_console_application.hpp"


void MinMaxConsoleApplication::init() {
    initscr();
}


int MinMaxConsoleApplication::run() {
    init();

    ConsoleInputCotroller console;
    NumericInputValidator inputValidator;
    InputParser inputParser;
    MinMaxFinder minMaxFinder;

    char buffer[8] {0};
    char current_char {0};
    size_t digits_in_buffer {0};

    console.print_message("Print number: ");

    while( digits_in_buffer < 8 ) {
        current_char = console.get_symbol_without_echo();
        if(  current_char == '0' && digits_in_buffer == 0 ) {
            continue;
        }
        else if ( inputValidator.is_digit( current_char ) ) {
            console.print_symbol(current_char);
            buffer[digits_in_buffer] = current_char;
            digits_in_buffer++;
        }
        else if ( current_char == BACKSPACE && digits_in_buffer > 0 ) {
            console.print_symbol(BACKSPACE);
            buffer[digits_in_buffer] = '\0';
            digits_in_buffer--;
        }
        else if ( current_char == ENTER && digits_in_buffer > 0 ) {
            break;
        }
    }

    std::string user_input { *buffer };
    uint32_t number {0};
    uint8_t  max_digit {0};
    uint8_t  min_digit {0};

    inputValidator.does_input_have_right_size(user_input, 1, 8);
    inputValidator.is_input_correct(user_input);

    number = inputParser.parse_string_to_uint32(user_input);
    max_digit = minMaxFinder.find_max_digit(number);
    min_digit = minMaxFinder.find_min_digit(number);

    console.print_symbol('\n');
    console.print_message("Max digit: ");
    console.print_symbol(static_cast<char>(max_digit + '0'));
    console.print_symbol('\n');
    console.print_message("Min digit: ");
    console.print_symbol(static_cast<char>(min_digit + '0'));
    console.print_symbol('\n');

    console.print_message("\n\nPress any key to exit..\n\n");
    console.get_symbol_without_echo();

    return 0;
}

