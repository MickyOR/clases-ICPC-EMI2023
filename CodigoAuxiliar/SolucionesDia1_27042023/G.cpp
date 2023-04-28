#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
  map<int, int> pos;
  int i = 0, j = 0;
  while (i < n || j < m) {
    if (j == m) {
      pos[a[i]] = i + j + 1;
      i++;
    }
    else if (i == n) {
      pos[b[j]] = i + j + 1;
      j++;
    }
    else if (a[i] < b[j]) {
      pos[a[i]] = i + j + 1;
      i++;
    }
    else {
      pos[b[j]] = i + j + 1;
      j++;
    }
  }
  for (int i = 0; i < n; ++i) {
    cout << pos[a[i]] << " ";
  }
  cout << endl;
  for (int i = 0; i < m; i++) {
    cout << pos[b[i]] << " ";
  }
  return 0;
}