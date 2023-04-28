#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int x;
  cin >> n >> x;
  vector<int> a(n);
  set<int> s;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    s.insert(a[i]);
  }
  bool existe = false;
  for (int i = 0; i < n; ++i) {
    if (s.count(a[i] + x)) {
      existe = true;
    }
  }
  if (existe) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}