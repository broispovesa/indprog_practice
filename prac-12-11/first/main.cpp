#include <cmath>
#include <iostream>

using namespace std;

int main() {
  float A;
  cout << "Введите диагональ грани куба" << endl;
  cin >> A;
  cout << pow(A / sqrt(2), 2) * 6;
}