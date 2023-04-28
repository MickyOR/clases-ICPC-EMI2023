n = int(input())
a = list(map(int, input().split()))

called = set()

for i in range(1, n+1):
  if i not in called:
    called.add(a[i-1])

res = []
for i in range(1, n+1):
  if i not in called:
    res.append(i)

print(len(res))
for x in res:
  print(x, end=" ")