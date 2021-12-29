#include <iostream>
int main()
{
  int num1;
  int num2;
  int resultado;
  std::cout << "Ingrese el primer numero para la suma\n";
  std::cin >> num1;
  std::cout << "Ingrese el segundo numero para la suma\n";
  std::cin >> num2;
  resultado = num1 - num2;
  std::cout << resultado << "\n";
  return 0;
}