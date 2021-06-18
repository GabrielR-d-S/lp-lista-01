/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

int valid_rect(const Ponto &IE, const Ponto &SD) {
  if (IE.x == SD.x && IE.y == SD.y)
    return false;
  return true;
}

void print_result(int x) {
  if (x == 0)
    cout << "inside" << endl;
  if (x == 1)
    cout << "border" << endl;
  if (x == 2)
    cout << "outside" << endl;
}


int main(void)
{
    Ponto IE, SD, P;
    float u, v, w, x, y, z;

    while(cin >> std::ws >> u >> v >> w >> x >> y >> z) {
      IE = Ponto(u, v);
      SD = Ponto(w, x);
      P = Ponto(y, z);

      if (valid_rect(IE, SD))
        print_result(pt_in_rect(IE, SD, P));
    }

    return 0;
}
