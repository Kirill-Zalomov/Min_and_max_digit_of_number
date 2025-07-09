#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>


#include "numeric_input_parser.hpp"


namespace bdata = boost::unit_test::data;


BOOST_AUTO_TEST_SUITE(InputParserTests)


BOOST_DATA_TEST_CASE( parse_valid_string_to_uint32_test,
    bdata::make({
        // Входная строка | Ожидаемое число
        std::make_tuple("0",        static_cast<uint32_t>(0)),
        std::make_tuple("1",        static_cast<uint32_t>(1)),
        std::make_tuple("123",      static_cast<uint32_t>(123)),
        std::make_tuple("1000",     static_cast<uint32_t>(1000)),
        std::make_tuple("2020",     static_cast<uint32_t>(2020)),
        std::make_tuple("8888888",  static_cast<uint32_t>(8888888))
    }),
    input_str, expected
)
{
    NumericInputParser parser;

    BOOST_CHECK_NO_THROW(parser.parse_string_to_uint32(input_str));
    BOOST_CHECK(parser.parse_string_to_uint32(input_str) == expected);
}


BOOST_DATA_TEST_CASE( parse_invalid_string_to_uint32_test,
    bdata::make({
        // Входная строка | Ожидаемое сообщение об ошибке
        std::make_tuple("53915917591823519298579182", "the input has an invalid size"),
        std::make_tuple("123456789",                  "the input has an invalid size"),
        std::make_tuple("000123",                     "the input is not a number"),
        std::make_tuple("7he110",                     "the input is not a number")
    }),
    input_str, expected_error
)
{
    NumericInputParser parser;

    BOOST_CHECK_EXCEPTION(
        parser.parse_string_to_uint32(input_str),
        std::invalid_argument,
        [expected_error](const std::invalid_argument& ex) {
            return std::string(ex.what()) == expected_error;
        }
    );
}


BOOST_AUTO_TEST_SUITE_END()
