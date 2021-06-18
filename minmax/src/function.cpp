#include "function.h"

/*!
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    if (n == 0)
      return {-1 , -1};

    int min = V[0], max = V[0];
    int maxIndex;

    for (auto i = 0; i < n; i++) {
      if (V[i] < min)
        min = V[i];
      if (V[i] > max)
        max = V[i];
    }

    bool achou = false;

    for (auto i = 0; i < n; i++) {
      if (!achou && V[i] == min) {
        min = i;
        achou = true;
      }

      if (V[i] == max)
        maxIndex = i;
    }

    return {min, maxIndex};

}
