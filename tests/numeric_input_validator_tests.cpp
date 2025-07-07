#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>


#include "numeric_input_validator.hpp"


BOOST_AUTO_TEST_SUITE(NumericInputValidatorTests)


BOOST_AUTO_TEST_CASE(is_digit_test) {
    NumericInputValidator niv;

    BOOST_TEST_CHECK( niv.is_digit('0') );
    BOOST_TEST_CHECK( niv.is_digit('1') );
    BOOST_TEST_CHECK( niv.is_digit('2') );
    BOOST_TEST_CHECK( niv.is_digit('3') );
    BOOST_TEST_CHECK( niv.is_digit('4') );
    BOOST_TEST_CHECK( niv.is_digit('5') );
    BOOST_TEST_CHECK( niv.is_digit('6') );
    BOOST_TEST_CHECK( niv.is_digit('7') );
    BOOST_TEST_CHECK( niv.is_digit('8') );
    BOOST_TEST_CHECK( niv.is_digit('9') );

    BOOST_TEST_CHECK( !niv.is_digit('a') );
    BOOST_TEST_CHECK( !niv.is_digit('!') );
    BOOST_TEST_CHECK( !niv.is_digit('/') );
    BOOST_TEST_CHECK( !niv.is_digit(':') );
}


BOOST_AUTO_TEST_CASE(does_input_have_rigth_size_test) {
    NumericInputValidator niv;

    BOOST_TEST_CHECK( niv.does_input_have_right_size("583723", 1, 8) );
    BOOST_CHECK_NO_THROW( niv.does_input_have_right_size("583723", 1, 8) );

    BOOST_TEST_CHECK( niv.does_input_have_right_size("5", 1, 8) );
    BOOST_CHECK_NO_THROW( niv.does_input_have_right_size("5", 1, 8) );

    BOOST_TEST_CHECK( niv.does_input_have_right_size("12345678", 1, 8) );
    BOOST_CHECK_NO_THROW( niv.does_input_have_right_size("12345678", 1, 8) );

    BOOST_TEST_CHECK( niv.does_input_have_right_size("123456789", 9, 9) );
    BOOST_CHECK_NO_THROW( niv.does_input_have_right_size("123456789", 9, 9) );

    BOOST_TEST_CHECK( !niv.does_input_have_right_size("", 1, 8) );
    BOOST_CHECK_NO_THROW( niv.does_input_have_right_size("", 1, 8) );

    BOOST_TEST_CHECK( !niv.does_input_have_right_size("123456789", 1, 8) );
    BOOST_CHECK_NO_THROW( niv.does_input_have_right_size("123456789", 1, 8) );

    BOOST_REQUIRE_EXCEPTION(
        niv.does_input_have_right_size("", 8, 1),
        std::invalid_argument,
        [](const std::invalid_argument &exeption) {
            return std::string(exeption.what()) == "the minimum size cannot be larger than the maximum";
        }
    );
}


BOOST_AUTO_TEST_CASE(is_input_correct_test) {
    NumericInputValidator niv;

    BOOST_TEST_CHECK( niv.is_input_correct("123") );
    BOOST_TEST_CHECK( niv.is_input_correct("1") );
    BOOST_TEST_CHECK( niv.is_input_correct("1276481748721744327898472781824") );

    BOOST_TEST_CHECK( !niv.is_input_correct("") );

    BOOST_TEST_CHECK( !niv.is_input_correct("000000") );
    BOOST_TEST_CHECK( !niv.is_input_correct("000123") );
    BOOST_TEST_CHECK( !niv.is_input_correct("0333330") );

    BOOST_TEST_CHECK( !niv.is_input_correct("12764817487217443.27898472781824") );
    BOOST_TEST_CHECK( !niv.is_input_correct("12764817487217443,27898472781824") );

    BOOST_TEST_CHECK( !niv.is_input_correct("123a3cb523") );
    BOOST_TEST_CHECK( !niv.is_input_correct("Hello") );
    BOOST_TEST_CHECK( !niv.is_input_correct("1H&el@l^o") );
}


BOOST_AUTO_TEST_SUITE_END()
