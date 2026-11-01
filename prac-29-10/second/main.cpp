#include <iostream>

using namespace std;

int main() {
  // в матрицу можно любые числа и сделать ее любого размера
  int m[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      m[i][j] = j + i;
    }
  }
  int tmp[3];
  for (int i = 0; i < 3; i++) {
    tmp[i] = m[0][i];
  }
  for (int i = 0; i < 3; i++) {
    m[0][i] = m[2][i];
  }
  for (int i = 0; i < 3; i++) {
    m[2][i] = tmp[i];
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << m[i][j] << ' ';
    }
    cout << endl;
  }
}