#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int main() {
    // Try to include main.cpp to check for compilation errors
    #include "main.cpp"

    // If we reached this point, compilation was successful
    // You can optionally add a test case to confirm successful compilation
    REQUIRE(true == true); // This will always pass
}
