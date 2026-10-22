#include <iostream>
#include <random>
#include <tuple>
#include <vector>

using namespace std;

// доделать соседей https://habr.com/ru/articles/849894/
// int neighbors(char matr, int row, int col){
//   vector<tuple<int, int>> dirs;
//   dirs.push_back(make_tuple(-1, 0));
//   dirs.push_back(make_tuple(1, 0));
//   dirs.push_back(make_tuple(0, 1));
//   dirs.push_back(make_tuple(0, -1));
//   dirs.push_back(make_tuple(-1, -1));
//   dirs.push_back(make_tuple(-1, 1));
//   dirs.push_back(make_tuple(1, -1));
//   dirs.push_back(make_tuple(1, 1));
//   for(int i = 0; i < 8; i++){
//     int dr = std::get<0>dirs[i];

//   }
// }

int main() {
  random_device rd;  // берем случайное число из операционной системы
  mt19937 gen(rd()); // используем это случайное число как сид для
                     // псевдослучайного генератора mt19937
  uniform_int_distribution<int> distrib(
      0, 9); // равномерное_целыхчисел_распределение <результат должен быть
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
  char open_matrix[10][10] = {0}; // то, что видит игрок
}