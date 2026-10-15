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
  int matrix[10][10] = {0};
  int k = 0;
  while (k <= 33) {
    int i = distrib(gen);
    int j = distrib(gen);
    if (matrix[i][j] != 1) {
      matrix[i][j] = 1;
      k += 1;
    }
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}