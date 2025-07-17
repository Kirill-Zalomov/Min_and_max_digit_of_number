#define BOOST_TEST_DYN_LINK


#include <boost/test/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>


#include "min_max_digit_finder.hpp"


namespace bdata = boost::unit_test::data;


BOOST_AUTO_TEST_SUITE(MinMaxFinderTests)


BOOST_DATA_TEST_CASE( find_min_digit_test,
    bdata::make({
        // Входное число | Ожидаемая цифра
        std::make_tuple(0U,          static_cast<uint8_t>(0)),
        std::make_tuple(8U,          static_cast<uint8_t>(8)),
        std::make_tuple(12345678U,   static_cast<uint8_t>(1)),
        std::make_tuple(87654321U,   static_cast<uint8_t>(1)),
        std::make_tuple(87654300U,   static_cast<uint8_t>(0)),
        std::make_tuple(30U,         static_cast<uint8_t>(0)),
        std::make_tuple(4534023U,    static_cast<uint8_t>(0))
    }),
    input, expected
)
{
    MinMaxDigitFinder mmdf;
    BOOST_CHECK(mmdf.find_min_digit(input) == expected);
}


BOOST_DATA_TEST_CASE( find_max_digit_test,
    bdata::make({
        // Входное число | Ожидаемая цифра
        std::make_tuple(0U,          static_cast<uint8_t>(0)),
        std::make_tuple(8U,          static_cast<uint8_t>(8)),
        std::make_tuple(12345678U,   static_cast<uint8_t>(8)),
        std::make_tuple(87654321U,   static_cast<uint8_t>(8)),
        std::make_tuple(99994321U,   static_cast<uint8_t>(9)),
        std::make_tuple(30U,         static_cast<uint8_t>(3)),
        std::make_tuple(4538093U,    static_cast<uint8_t>(9))
    }),
    input, expected
)
{
    MinMaxDigitFinder mmdf;
    BOOST_CHECK(mmdf.find_max_digit(input) == expected);
}


BOOST_AUTO_TEST_SUITE_END()
