#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <iostream>
#include "doctest.h"
#include "LinkedList.hpp"

template<typename TElem>
LinkedList<TElem> makeList(const std::initializer_list<TElem>& ilst)
{
    return LinkedList<TElem>(ilst);
}

TEST_CASE("List of Ints: initializer_list")
{
    LinkedList<int> lst({59, 13, 46, 9, 33, 55, 15, 79, 92, 6, 46});

    auto* n = lst.getHead();
    CHECK(n->getData() == 59);
    n = n->getNext();
    CHECK(n->getData() == 13);
    n = n->getNext();
    CHECK(n->getData() == 46);
    n = n->getNext();
    CHECK(n->getData() == 9);
    n = n->getNext();
    CHECK(n->getData() == 33);
    n = n->getNext();
    CHECK(n->getData() == 55);
    n = n->getNext();
    CHECK(n->getData() == 15);
    n = n->getNext();
    CHECK(n->getData() == 79);
    n = n->getNext();
    CHECK(n->getData() == 92);
    n = n->getNext();
    CHECK(n->getData() == 6);
    n = n->getNext();
    CHECK(n->getData() == 46);
    n = n->getNext();

    CHECK( n == nullptr );
}

TEST_CASE("List of Ints: Operator ==")
{
    LinkedList<int> lst({59, 13, 46, 9, 33, 55, 15, 79, 92, 6, 46});

    CHECK( lst.size() == 11 );
    CHECK( lst == makeList({59, 13, 46, 9, 33, 55, 15, 79, 92, 6, 46}) );
}

TEST_CASE("List of Strings: Operator ==")
{
    LinkedList<std::string> lst({"Honduras", "Guatemala", "El Salvador", "Nicaragua", "Costa Rica", "Panama", "Belice"});

    CHECK( lst.size() == 7 );
    CHECK( lst == makeList<std::string>({"Honduras", "Guatemala", "El Salvador", "Nicaragua", "Costa Rica", "Panama", "Belice"}) );
}

TEST_CASE("Conversion from Vector")
{
    std::vector<long> v{59, 13, 46, 9, 33, 55, 15, 79, 92, 6, 46};
    LinkedList<long> lst(v);

    CHECK( lst.size() == 11 );
    CHECK( lst == makeList<long>({59,13,46,9,33,55,15,79,92,6,46}) );
}

TEST_CASE("Equal comparison to Vector: 1")
{
    std::vector<long> v{59, 13, 46, 9, 33, 55, 15, 79, 92, 6, 46};
    LinkedList<long> lst(v);

    CHECK( lst.size() == 11 );
    CHECK( lst == v );
}

TEST_CASE("Equal comparison to Vector: 2")
{
    std::vector<long> v{59, 13, 46, 9, 33, 55, 15, 79, 92, 6, 46};
    LinkedList<long> lst(v);

    auto head = lst.getHead();
    head->setData(60);

    CHECK( lst.size() == 11 );
    CHECK( !(lst == v) );
}

TEST_CASE("Equal comparison to Vector: 3")
{
    std::vector<long> v{59, 13, 46, 9, 33, 55, 15, 79, 92, 6, 46};
    LinkedList<long> lst(v);

    lst.addElement(46);

    CHECK( lst.size() == 12 );
    CHECK( !(lst == v) );
}

TEST_CASE("pushFront operation")
{
    LinkedList<int> lst;

    CHECK( lst.size() == 0 );
    for (int i = 0; i < 10; i++)
    {
        lst.pushFront(i);
        CHECK( lst.size() == (i + 1));
    }
    CHECK( lst == makeList({9, 8, 7, 6, 5, 4, 3, 2, 1, 0}) );
}


// OPTIONAL: Uncomment if you want to implement selection sort for the list
TEST_CASE("Sort")
{
    LinkedList<int> lst({59, 13, 46, 9, 33, 55, 15, 79, 92, 6, 46});
    
    lst.selectionSort();

    CHECK( lst == makeList({6, 9, 13, 15, 33, 46, 46, 55, 59, 79, 92}));
}

