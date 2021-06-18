/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Intervalos:
// A = [0, 25)
// B = [25, 50)
// C = [50, 75)
// D = [75, 100)
enum Intervalos {A = 1, B, C, D};
int intervalos[]= {25, 50, 75, 100};

int checarIntervalo(int x) {
  if (x < 0 || x >= 100)
    return 0;

  int intervaloAtual = A;

  for (auto i : intervalos) {
    if (x < i)
      return intervaloAtual;
    intervaloAtual++;
  }

  return 0;
}


int main(void)
{
  int x;
  int intervaloA = 0, intervaloB = 0, intervaloC = 0, intervaloD = 0;
  float contador = 0;

  while(cin >> std::ws >> x) {
    contador++;
    switch (checarIntervalo(x)) {
      case 0:
        continue;
      case A:
        intervaloA++;
        break;
      case B:
        intervaloB++;
        break;
      case C:
        intervaloC++;
        break;
      case D:
        intervaloD++;
    }
  }

  cout << setprecision(4) << (intervaloA / contador) * 100 << endl;
  cout << setprecision(4) << (intervaloB / contador) * 100 << endl;
  cout << setprecision(4) << (intervaloC / contador) * 100 << endl;
  cout << setprecision(4) << (intervaloD / contador) * 100 << endl;
  cout << setprecision(4) << ((contador - (intervaloA + intervaloB + intervaloC + intervaloD)) / contador) * 100 << endl;

  return 0;
}
