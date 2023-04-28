#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  set<int> s;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    s.insert(a[i]);
  }
  int x;
  cin >> x;
  // menor numero >= x
  // auto it = s.lower_bound(x);

  // menor numero > x
  // auto it = s.upper_bound(x);

  // if (it == s.end()) {
  //   cout << "no hay" << endl;
  // }
  // else {
  //   cout << "mayor a " << x << ": ";
  //   cout << *it << endl;
  // }

  // encontrar elemento mayor a x
  auto it = s.lower_bound(x);
  if (it == s.begin()) {
    cout << "no hay" << endl;
  }
  else {
    it--;
    cout << *it << endl;
  }
  return 0;
}