#define BOOST_TEST_MODULE MinMaxFinderTests


#include <boost/test/unit_test.hpp>
#include <cstdint>


#include "min_max_finder.hpp"


BOOST_AUTO_TEST_SUITE(MinMaxFinderTests)


BOOST_AUTO_TEST_CASE(find_min_digit_test) {
    MinMaxFinder minMax;

    BOOST_CHECK( minMax.find_min_digit(static_cast<uint32_t>(0)) == static_cast<uint8_t>(0));
    BOOST_CHECK(minMax.find_min_digit(static_cast<uint32_t>(8)) == static_cast<uint8_t>(8));
    BOOST_CHECK(minMax.find_min_digit(static_cast<uint32_t>(12345678)) == static_cast<uint8_t>(1));
    BOOST_CHECK(minMax.find_min_digit(static_cast<uint32_t>(87654321)) == static_cast<uint8_t>(1));
    BOOST_CHECK(minMax.find_min_digit(static_cast<uint32_t>(87654300)) == static_cast<uint8_t>(0));
    BOOST_CHECK(minMax.find_min_digit(static_cast<uint32_t>(30)) == static_cast<uint8_t>(0));
    BOOST_CHECK(minMax.find_min_digit(static_cast<uint32_t>(4534023)) == static_cast<uint8_t>(0));
}


BOOST_AUTO_TEST_CASE(find_max_digit_test) {
    MinMaxFinder minMax;

    BOOST_TEST(minMax.find_max_digit(static_cast<uint32_t>(0)) == static_cast<uint8_t>(0));
    BOOST_TEST(minMax.find_max_digit(static_cast<uint32_t>(8)) == static_cast<uint8_t>(8));
    BOOST_TEST(minMax.find_max_digit(static_cast<uint32_t>(12345678)) == static_cast<uint8_t>(8));
    BOOST_TEST(minMax.find_max_digit(static_cast<uint32_t>(87654321)) == static_cast<uint8_t>(8));
    BOOST_TEST(minMax.find_max_digit(static_cast<uint32_t>(99994321)) == static_cast<uint8_t>(9));
    BOOST_TEST(minMax.find_max_digit(static_cast<uint32_t>(30)) == static_cast<uint8_t>(3));
    BOOST_TEST(minMax.find_max_digit(static_cast<uint32_t>(4538093)) == static_cast<uint8_t>(9));
}


BOOST_AUTO_TEST_SUITE_END()
