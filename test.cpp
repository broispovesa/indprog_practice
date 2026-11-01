#include <iostream>

using namespace std;

bool third(string a) {
  string new_line;
  for (int i = a.size() - 1; i >= 0; i--) {
    new_line += a[i];
  }
  if (a == new_line) {
    return true;
  }
  return false;
}

int main() { cout << third("level"); }