#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> cnt; 
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    cnt[a[i]]++;
  }
  int res = 0;
  for (auto it : cnt) {
    res += it.second / 2;
  }
  cout << res << endl;
  return 0;
}