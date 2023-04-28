#include <bits/stdc++.h>

using namespace std;

int main() {
  int row, col;
  for (int i = 0; i < 8; ++i) {
    string s;
    cin >> s;
    for (int j = 0; j < 8; ++j) {
      if (s[j] == '*') {
        row = i;
        col = j;
      }
    }
  }
  cout << (char)('a' + col);
  cout << 8 - row;
  return 0;
}