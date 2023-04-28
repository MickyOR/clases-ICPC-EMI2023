from collections import defaultdict

[n, q] = list(map(int, input().split()))
a = list(map(int, input().split()))

d = defaultdict(list)

for i in range(n):
  d[a[i]].append(i+1)

for i in range(q):
  [x, k] = list(map(int, input().split()))
  if len(d[x]) < k:
    print(-1)
  else:
    print(d[x][k-1])