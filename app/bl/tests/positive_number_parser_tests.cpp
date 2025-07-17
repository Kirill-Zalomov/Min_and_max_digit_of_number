#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>


#include "positive_number_parser.hpp"


namespace bdata = boost::unit_test::data;


BOOST_AUTO_TEST_SUITE(InputParserTests)


BOOST_DATA_TEST_CASE( parse_valid_string_test,
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
    PositiveNumberParser parser;

    BOOST_CHECK_NO_THROW(parser.parse(input_str));
    BOOST_CHECK(parser.parse(input_str) == expected);
}


BOOST_AUTO_TEST_SUITE_END()
