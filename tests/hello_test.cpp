#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"
#include "../src/node.hpp"

TEST_CASE( "it returns Hello World" ) {
    REQUIRE( hello() == "Hello World!" );
}

TEST_CASE("print") {
    Link gold = Link("Gold");
    Node node_one = Node(gold);
    REQUIRE( node_one.print() == "Gold" );
}

TEST_CASE("print") {
    Link gold = Link("Gold");
    Node node_one = Node(gold);
    REQUIRE( node_one.print() == "Gold" );
}

