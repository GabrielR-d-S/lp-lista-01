#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> vec;
    if (n < 2)
      return vec;

    vec.push_back(1);
    vec.push_back(1);

    int num = 2, i = 1;
    while (num < n) {
      if (num == vec[i] + vec[i - 1]) {
        vec.push_back(num);
        i++;
      }
      num++;
    }

    return vec;
}
