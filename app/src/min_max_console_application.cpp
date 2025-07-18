#include "min_max_console_application.hpp"


MinMaxConsoleApplication::MinMaxConsoleApplication() {
    init();
}


void MinMaxConsoleApplication::init() {
    initscr();
}


void MinMaxConsoleApplication::print_invitation_message() {
    ConsoleOutputController *coc;
    *coc = console_;
    coc->print_line("Print number: ");
}


void MinMaxConsoleApplication::get_user_input() {
    ConsoleOutputController *coc;
    *coc = console_;

    ConsoleInputController *cic;
    *cic = console_;

    char buffer[8] {0}, current_char {0};
    size_t digits_in_buffer {0};

    while( digits_in_buffer < 8 ) {
        current_char = cic->read_symbol_without_echo();

        if ( current_char == ENTER && digits_in_buffer > 0 ) break;
        else if(  current_char == '0' && digits_in_buffer == 0 ) continue;
        else if ( input_validator_.is_digit( current_char ) ) {
            coc->print_symbol(current_char);
            buffer[digits_in_buffer] = current_char;
            digits_in_buffer++;
        }
        else if ( current_char == BACKSPACE && digits_in_buffer > 0 ) {
            coc->print_symbol(BACKSPACE);
            buffer[digits_in_buffer] = '\0';
            digits_in_buffer--;
        }
    }

    std::string result { buffer };
    user_input_ = std::move(result);
}


void MinMaxConsoleApplication::process_user_input() {
    input_validator_.does_content_have_right_size(user_input_, 1, 8);
    input_validator_.is_content_valid(user_input_);

    number_ = *(input_parser_.parse(user_input_));
    max_digit_ = min_max_finder_.find_max_digit(number_);
    min_digit_ = min_max_finder_.find_min_digit(number_);
}


void MinMaxConsoleApplication::print_result() {
    ConsoleOutputController *coc;
    *coc = console_;

    ConsoleInputController *cic;
    *cic = console_;

    coc->print_line("\nMin digit: ");
    coc->print_symbol(static_cast<char>(min_digit_ + '0'));
    coc->print_line("\nMax digit: ");
    coc->print_symbol(static_cast<char>(max_digit_ + '0'));

    coc->print_line("\n\n\nPress any key to exit..\n\n");
    cic->read_symbol_without_echo();
}


int MinMaxConsoleApplication::run() {
    print_invitation_message();
    get_user_input();
    process_user_input();
    print_result();

    return 0;
}
