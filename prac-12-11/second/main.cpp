#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> mas;
  for (int i = 0; i < 10; i++) {
    int n;
    cin >> n;
    mas.push_back(n);
  }
  bool swapd;
  for (int i = 0; i < mas.size(); ++i) {
    swapd = false;
    for (int j = 0; j < mas.size() - i - 1; ++j) {
      if (mas[j] > mas[j + 1]) {
        swap(mas[j], mas[j + 1]);
        swapd = true;
      }
    }
    if (!swapd) {
      break;
    }
  }
  for (int i = 0; i < 10; i++) {
    cout << mas[i] << " ";
  }
}