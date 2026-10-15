#include <iostream>

using namespace std;

int first() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = n; i >= 0; i--) {
    cout << arr[i] << " ";
  }
  return 0;
}

int second() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int pol_c = 0;
  int pol_s = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      pol_c++;
      pol_s += arr[i];
    }
  }
  if (pol_c == 0) {
    cout << 0 << endl;
  } else {
    cout << pol_c << ' ' << pol_s << endl;
  }
}

int third() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int m_num = 0;
  int m_ind = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > m_num) {
      m_num = arr[i];
      m_ind = i + 1;
    }
  }
  cout << m_num << ' ' << m_ind << endl;
}

int fourth() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int new_first = arr[n - 1];
  for (int i = n - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = new_first;
  for (int j = 0; j < n; j++) {
    cout << arr[j] << " ";
  }
  return 0;
}

int fifth() {
  int n, m;
  cin >> n >> m;
  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  int sum_str = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      sum_str += arr[i][j];
    }
    cout << sum_str << endl;
    sum_str = 0;
  }
  return 0;
}

int sixth() {
  int n, m;
  cin >> n >> m;
  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  int sum_str = 0;
  int max_ind = 0;
  int max_sum = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      sum_str += arr[j][i];
    }
    if (sum_str > max_sum) {
      max_sum = sum_str;
      max_ind = i;
    }
    sum_str = 0;
  }
  cout << max_ind + 1 << " " << max_sum << endl;
  return 0;
}

int seventh() {
  int n;
  cin >> n;
  int arr[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  int up = 0;
  int down = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      up += arr[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      down += arr[i][j];
    }
  }
  cout << up << ' ' << down << endl;
  return 0;
}
int main() { return 0; }