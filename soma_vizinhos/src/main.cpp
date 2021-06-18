/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
  int m, n, soma;

  while( cin >> std::ws >> m >> n) {
    if (n == 0) {
      cout << m << endl;
      continue;
    }

    soma = m;
    if (n > 0) {
      for (auto i = 0; i < n - 1; i++) {
        m++;
        soma += m;
      }
      cout << soma << endl;
      continue;
    }
    for (int i = 0; i > n + 1; i--) {
      m--;
      soma += m;
    }
    cout << soma << endl;
  }

    return 0;
}
