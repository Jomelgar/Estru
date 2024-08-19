#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "Matrix.hpp"


TEST_CASE("Empty matrix") {
    Matrix m1;

    CHECK(m1.rowCount() == 0);
    CHECK(m1.columnCount() == 0);

    REQUIRE_THROWS( m1.at(0, 0) = 0 );
}

TEST_CASE("Simple matrix") {
    Matrix m1(2, 3);

    REQUIRE(m1.rowCount() == 2);
    REQUIRE(m1.columnCount() == 3);

    for (int r = 0; r < m1.rowCount(); r++) {
        for (int c = 0; c < m1.columnCount(); c++) {
            REQUIRE_NOTHROW( m1.at(r, c) = (r + 1) * (c + 1) );
        }
    }

    for (int r = 0; r < m1.rowCount(); r++) {
        for (int c = 0; c < m1.columnCount(); c++) {
            int value;
            REQUIRE_NOTHROW(value = m1.at(r, c));
            CHECK(value == (r + 1) * (c + 1));
        }
    }

    REQUIRE_THROWS(m1.at(1, 3));
}

TEST_CASE("Matrix copy constructor") {
    Matrix m1(2, 3);

    REQUIRE(m1.rowCount() == 2);
    REQUIRE(m1.columnCount() == 3);

    for (int r = 0; r < m1.rowCount(); r++) {
        for (int c = 0; c < m1.columnCount(); c++) {
            REQUIRE_NOTHROW( m1.at(r, c) = (r + 1) * (c + 1) );
        }
    }

    Matrix m2 (m1);

    for (int r = 0; r < m2.rowCount(); r++) {
        for (int c = 0; c < m2.columnCount(); c++) {
            REQUIRE_NOTHROW( m2.at(r, c) ++ );
        }
    }

    // Check m1
    for (int r = 0; r < m1.rowCount(); r++) {
        for (int c = 0; c < m1.columnCount(); c++) {
            int value;
            REQUIRE_NOTHROW(value = m1.at(r, c));
            CHECK(value == (r + 1) * (c + 1));
        }
    }

    // Check m2
    for (int r = 0; r < m2.rowCount(); r++) {
        for (int c = 0; c < m2.columnCount(); c++) {
            int value;
            REQUIRE_NOTHROW(value = m2.at(r, c));
            CHECK(value == (r + 1) * (c + 1) + 1);
        }
    }
}

TEST_CASE("Matrix copy assign") {
    Matrix m1(2, 3);

    REQUIRE(m1.rowCount() == 2);
    REQUIRE(m1.columnCount() == 3);

    for (int r = 0; r < m1.rowCount(); r++) {
        for (int c = 0; c < m1.columnCount(); c++) {
            REQUIRE_NOTHROW( m1.at(r, c) = (r + 1) * (c + 1) );
        }
    }

    Matrix m2;

    m2 = m1;
    for (int r = 0; r < m2.rowCount(); r++) {
        for (int c = 0; c < m2.columnCount(); c++) {
            REQUIRE_NOTHROW( m2.at(r, c) ++ );
        }
    }

    // Check m1
    for (int r = 0; r < m1.rowCount(); r++) {
        for (int c = 0; c < m1.columnCount(); c++) {
            int value;
            REQUIRE_NOTHROW(value = m1.at(r, c));
            CHECK(value == (r + 1) * (c + 1));
        }
    }

    // Check m2
    for (int r = 0; r < m2.rowCount(); r++) {
        for (int c = 0; c < m2.columnCount(); c++) {
            int value;
            REQUIRE_NOTHROW(value = m2.at(r, c));
            CHECK(value == (r + 1) * (c + 1) + 1);
        }
    }
}

TEST_CASE("Matrix toString") {
    Matrix m1(2, 3);

    REQUIRE(m1.rowCount() == 2);
    REQUIRE(m1.columnCount() == 3);

    for (int r = 0; r < m1.rowCount(); r++) {
        for (int c = 0; c < m1.columnCount(); c++) {
            REQUIRE_NOTHROW( m1.at(r, c) = (r + 1) * (c + 1) );
        }
    }

    REQUIRE (m1.toString() == "[[1, 2, 3], [2, 4, 6]]");
}

