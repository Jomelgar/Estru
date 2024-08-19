#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <algorithm>
#include "doctest.h"
#include "Merge.hpp"

TEST_CASE("Merge 1") {
    std::vector<int> v1({1, 2, 3});
    std::vector<int> v2({4, 5, 6});

    std::vector<int> rv;

    REQUIRE_NOTHROW (rv = merge(v1, v2));
    REQUIRE(rv.size() == v1.size() + v2.size());

    REQUIRE(std::is_sorted(rv.begin(), rv.end()));
}


TEST_CASE("Merge 2") {
    std::vector<int> v1({6, 10, 13, 26, 42, 63, 64, 68, 73, 73});
    std::vector<int> v2({4, 5, 32, 49, 59, 67, 68, 79, 83, 95});

    std::vector<int> rv;

    REQUIRE_NOTHROW (rv = merge(v1, v2));
    REQUIRE(rv.size() == v1.size() + v2.size());

    REQUIRE(std::is_sorted(rv.begin(), rv.end()));
}
