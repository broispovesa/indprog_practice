#include <iostream>
#include <vector>

using namespace std;

vector<int> summ(vector<int> a, vector<int> b) {
  int n = a.size();
  vector<int> ot;
  for (int i = 0; i < n; i++) {
    ot.push_back(a[i] + b[i]);
  }
  return ot;
}
// проверк
int main() {
  vector<int> a = {1, 2, 3};
  vector<int> b = {4, 5, 6};
  vector<int> c = summ(a, b);
  for (int i = 0; i < c.size(); i++) {
    cout << c[i] << ' ';
  }
}