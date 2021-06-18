#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int num, contador = 0;

    for (auto i = 0; i < SIZE; i++) {
      cin >> num;
      if (num < 0)
        contador++;
    }

    cout << contador;

    return 0;
}
