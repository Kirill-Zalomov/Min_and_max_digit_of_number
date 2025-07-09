#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>


#include "numeric_input_parser.hpp"


BOOST_AUTO_TEST_SUITE(InputParserTests);


BOOST_AUTO_TEST_CASE(parse_string_to_uint32_test) {
    NumericInputParser parser;


    BOOST_REQUIRE_NO_THROW( parser.parse_string_to_uint32("0") );
    BOOST_REQUIRE_NO_THROW( parser.parse_string_to_uint32("1") );
    BOOST_REQUIRE_NO_THROW( parser.parse_string_to_uint32("123") );
    BOOST_REQUIRE_NO_THROW( parser.parse_string_to_uint32("1000") );
    BOOST_REQUIRE_NO_THROW( parser.parse_string_to_uint32("2020") );
    BOOST_REQUIRE_NO_THROW( parser.parse_string_to_uint32("8888888") );

    BOOST_CHECK( parser.parse_string_to_uint32("0") == static_cast<uint32_t>(0) );
    BOOST_CHECK( parser.parse_string_to_uint32("1") == static_cast<uint32_t>(1) );
    BOOST_CHECK( parser.parse_string_to_uint32("123") == static_cast<uint32_t>(123) );
    BOOST_CHECK( parser.parse_string_to_uint32("1000") == static_cast<uint32_t>(1000) );
    BOOST_CHECK( parser.parse_string_to_uint32("2020") == static_cast<uint32_t>(2020) );
    BOOST_CHECK( parser.parse_string_to_uint32("8888888") == static_cast<uint32_t>(8888888) );

    BOOST_CHECK_EXCEPTION(
        parser.parse_string_to_uint32("53915917591823519298579182"),
        std::invalid_argument,
        [](const std::invalid_argument &exeption) {
            return std::string(exeption.what()) == "the input has an invalid size";
        }
    );

    BOOST_CHECK_EXCEPTION(
        parser.parse_string_to_uint32("123456789"),
        std::invalid_argument,
        [](const std::invalid_argument &exeption) {
            return std::string(exeption.what()) == "the input has an invalid size";
        }
    );

    BOOST_CHECK_EXCEPTION(
        parser.parse_string_to_uint32("000123"),
        std::invalid_argument,
        [](const std::invalid_argument &exeption) {
            return std::string(exeption.what()) == "the input is not a number";
        }
    );

    BOOST_CHECK_EXCEPTION(
        parser.parse_string_to_uint32("7he110"),
        std::invalid_argument,
        [](const std::invalid_argument &exeption) {
            return std::string(exeption.what()) == "the input is not a number";
        }
    );
}


BOOST_AUTO_TEST_SUITE_END();



