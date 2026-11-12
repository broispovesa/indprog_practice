#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
  vector<int> mas;
  ifstream in("vector.txt");
  string line;
  if (getline(in, line)) {
    int n;
    stringstream ss(line);
    while (ss >> n) {
      mas.push_back(n);
    }
  }
  for (int i = 0; i < mas.size(); i++) {
    cout << mas[i] << ' ';
  }
  cout << endl;
  int summ = 0;
  for (int j = mas.size() - 1; j >= 0; j--) {
    if (mas[j] >= 0) {
      summ += mas[j];
    } else {
      break;
    }
  }
  cout << "Такая сумма равна " << summ;
}