n = int(input())
a = list(map(int, input().split()))

res = 0
s = set()

for i in range(len(a)):
  s.add(a[i])

while res in s:
  res = res + 1

print(res)