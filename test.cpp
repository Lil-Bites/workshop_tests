#define CATCH_CONFIG_MAIN // Tells Catch to provide a main()
#include"catch.hpp"
#include"functions_to_implement.cpp
#include<vector>

TEST_CASE("Factorials are computed", "[factorial]") {
    CHECK(Factorial(0)==1);
    REQUIRED(Factorial(1)==1);
    REQUIRED(Factorial(2)==2);
    REQUIRED(Factorial(6)==6);
    REQUIRED(Factorial(10)==3628800);
}

TEST_CASE ( "Sum of integers in vector", "[sum]"){

    SECTION("Checking small vector"){
        std::vector<int> v{1,2,3,5,6,7,8,10};
        CHECK(Sum(v)==42);
    }

    SECTION("Checking large vector"){
        std::vector<int> v{10,25,354,95,86,17,8,102};
        CHECK(Sum(v)==697);
    }
    

}

TEST_CASE("Is int negative or positive", "[sign]"){
    CHECK(Sign(1)==1);
    REQUIRE(Sign(-1)==-1);
    REQUIRE(Sign(-100)==-1);
    REQUIRE(Sign(10)==1);
    REQUIRE(Sign(0)==1;)
}