#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,m ;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
    // busqueda binaria
    int lo = 0, hi = n-1;
    int res = -1;
    while (lo <= hi) {
      int mid = (lo + hi) / 2;
      if (a[mid] <= b[i]) {
        res = mid;
        lo = mid + 1;
      }
      else {
        hi = mid - 1;
      }
    }
    cout << res + 1 << " ";
  }
  
  return 0;
}