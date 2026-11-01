#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int mas[n];
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    mas[i] = k;
  }
  for (int i = 0; i < n; i++) {
    cout << mas[i] << ' ';
  }
  cout << endl;
  sort(mas, mas + n);
  cout << mas[n - 2];
}