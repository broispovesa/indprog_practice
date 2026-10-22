#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ifstream fin("task.txt");
  int a, b, c, d, e;
  fin >> a >> b >> c >> d;
  vector<int> nums = {a, b, c, d};
  fin >> e;
  nums.push_back(e);
  nums.push_back(5);
  nums.push_back(2839);
  ofstream Output("answer.txt");
  for (int i = 0; i < size(nums); i++) {
    Output << nums[i] << ' ';
  }
  Output.close();
}