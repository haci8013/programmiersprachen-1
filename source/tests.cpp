#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

int andom(){
  return 5;
}

TEST_CASE("describe_gcd", "[gcd]"){
  REQUIRE(andom() == 2);

}