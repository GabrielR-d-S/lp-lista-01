#include <iostream>
#include <array>
/*!
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
  int first = 0;
  int last = SIZE;

  if (SIZE % 2 == 0) {
    for (int i = 0; i < SIZE / 2; i++) {
      std::swap(arr.at(first), arr.at(last));
      first++;
      last--;
    }
  } else {
    for (int i = 0; i < (SIZE - 1) / 2; i++) {
      std::swap(arr.at(first), arr.at(last));
      first++;
      last--;
    }
  }
}
