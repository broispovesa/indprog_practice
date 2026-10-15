#include <iostream>
#include <random>

using namespace std;

int main() {
  random_device rd;  // берем случайное число из операционной системы
  mt19937 gen(rd()); // используем это случайное число как сид для
                     // псевдослучайного генератора mt19937
  uniform_int_distribution<int> distrib(
      1, 10); // равномерное_целыхчисел_распределение <результат должен быть
              // целым> имя_нашего_объекта(граница, граница)
  char matrix[10][10] = {'0'};
  int k = 0;
  while (k <= 33) {
    int i = distrib(gen);
    int j = distrib(gen);
    if (matrix[i][j] != '1') {
      matrix[i][j] = '1';
      k += 1;
    }
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (matrix[i][j] == '1') {
        matrix[i][j] = '*';
      } else {
        matrix[i][j] = '#';
      }
    }
  }
  cout << "👽\ta\tb\tc\td\te\tf\tg\th\ti\tj" << endl;
  for (int i = 0; i < 10; i++) {
    cout << i + 1 << '\t';
    for (int j = 0; j < 10; j++) {
      cout << matrix[i][j] << '\t';
    }
    cout << endl;
  }
}