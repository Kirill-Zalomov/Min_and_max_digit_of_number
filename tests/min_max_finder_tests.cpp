#include <catch2/catch_test_macros.hpp>


#include "min_max_finder.hpp"


TEST_CASE("Checking the correct operation of find_min_digit", "[MinMaxFinder]") {
    MinMaxFinder minMax;

    REQUIRE( minMax.find_min_digit(static_cast<uint32_t>(0)) == static_cast<uint8_t>(0) );
    REQUIRE( minMax.find_min_digit(static_cast<uint32_t>(8)) == static_cast<uint8_t>(8) );
    REQUIRE( minMax.find_min_digit(static_cast<uint32_t>(12345678)) == static_cast<uint8_t>(1) );
    REQUIRE( minMax.find_min_digit(static_cast<uint32_t>(87654321)) == static_cast<uint8_t>(1) );
    REQUIRE( minMax.find_min_digit(static_cast<uint32_t>(87654300)) == static_cast<uint8_t>(0) );
    REQUIRE( minMax.find_min_digit(static_cast<uint32_t>(30)) == static_cast<uint8_t>(0) );
    REQUIRE( minMax.find_min_digit(static_cast<uint32_t>(4534023)) == static_cast<uint8_t>(0) );
}


TEST_CASE("Checking the correct operation of find_max_digit", "[MinMaxFinder]") {
    MinMaxFinder minMax;

    REQUIRE( minMax.find_max_digit(static_cast<uint32_t>(0)) == static_cast<uint8_t>(0) );
    REQUIRE( minMax.find_max_digit(static_cast<uint32_t>(8)) == static_cast<uint8_t>(8) );
    REQUIRE( minMax.find_max_digit(static_cast<uint32_t>(12345678)) == static_cast<uint8_t>(8) );
    REQUIRE( minMax.find_max_digit(static_cast<uint32_t>(87654321)) == static_cast<uint8_t>(8) );
    REQUIRE( minMax.find_max_digit(static_cast<uint32_t>(99994321)) == static_cast<uint8_t>(9) );
    REQUIRE( minMax.find_max_digit(static_cast<uint32_t>(30)) == static_cast<uint8_t>(3) );
    REQUIRE( minMax.find_max_digit(static_cast<uint32_t>(4538093)) == static_cast<uint8_t>(9) );
}
