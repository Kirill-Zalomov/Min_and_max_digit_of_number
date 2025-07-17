#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>


#include "validator_of_string_with_positive_number.hpp"


namespace bdata = boost::unit_test::data;


BOOST_AUTO_TEST_SUITE(ValidatorOfStringWithPositiveNumberTests)


// Тесты для is_digit()
BOOST_DATA_TEST_CASE( is_digit_true_test,
    bdata::make({'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}),
    digit
)
{
    ValidatorOfStringWithPositiveNumber validator;
    BOOST_CHECK(validator.is_digit(digit));
}


BOOST_DATA_TEST_CASE( is_digit_false_test,
    bdata::make({'a', '!', '/', ':', '@', ' ', '\n', '\t', 'A', '.'}),
    not_digit
)
{
    ValidatorOfStringWithPositiveNumber validator;
    BOOST_CHECK( !validator.is_digit(not_digit) );
}


// Тесты для does_input_have_right_size() с валидными аргументами
BOOST_DATA_TEST_CASE( does_input_have_right_size_valid_args_test,
    bdata::make({
        // input, min, max, expected
        std::make_tuple("583723", 1, 8, true),
        std::make_tuple("5", 1, 8, true),
        std::make_tuple("12345678", 1, 8, true),
        std::make_tuple("123456789", 9, 9, true),
        std::make_tuple("", 1, 8, false),
        std::make_tuple("123456789", 1, 8, false)
    }),
    input_str, min_size, max_size, expected
)
{
    ValidatorOfStringWithPositiveNumber validator;
    BOOST_CHECK(validator.does_content_have_right_size(input_str, min_size, max_size) == expected);
    BOOST_CHECK_NO_THROW(validator.does_content_have_right_size(input_str, min_size, max_size));
}


// Тест для does_input_have_right_size() с невалидными аргументами
BOOST_AUTO_TEST_CASE(does_input_have_right_size_invalid_args_test) {
    ValidatorOfStringWithPositiveNumber validator;

    BOOST_CHECK_EXCEPTION(
        validator.does_content_have_right_size("", 8, 1),
        std::invalid_argument,
        [](const std::invalid_argument& ex) {
            return std::string(ex.what()) == "the minimum size cannot be larger than the maximum";
        }
    );
}


// Тесты для is_input_correct()
BOOST_DATA_TEST_CASE( is_input_correct_true_test,
    bdata::make({
        "0",
        "1",
        "123",
        "1276481748721744327898472781824"
    }),
    input_str
)
{
    ValidatorOfStringWithPositiveNumber validator;
    BOOST_CHECK(validator.is_content_valid(input_str));
}


BOOST_DATA_TEST_CASE( is_input_correct_false_test,
    bdata::make({
        "",
        "03",
        "000000",
        "000123",
        "0333330",
        "12764817487217443.27898472781824",
        "12764817487217443,27898472781824",
        "123a3cb523",
        "Hello",
        "1H&el@l^o"
    }),
    input_str
)
{
    ValidatorOfStringWithPositiveNumber validator;
    BOOST_CHECK(!validator.is_content_valid(input_str));
}


BOOST_AUTO_TEST_SUITE_END()
