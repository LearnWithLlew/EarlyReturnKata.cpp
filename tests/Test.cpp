#include "ApprovalTests.hpp"
#include "Catch.hpp"
#include "../code/Lesson1EaryReturns.h"
#include <string>
using namespace std;



TEST_CASE("Test EarlyReturns") {
      std::vector<int> ints(34);
      std::iota(ints.begin(), ints.end(), 1);
      std::vector<double> doubles(18);
      std::iota(doubles.begin(), doubles.end(), 1.5);

      CombinationApprovals::verifyAllCombinations<std::vector<int>, std::vector<int>, std::vector<double>, int>
              ( [](int a,int b, double d){return calculate(a,b,d);}, ints,ints, doubles);

}