import math
n, k, m = map(int, input().split())
A = list(map(int, input().split()))

asum = sum(A)

hoge = m * n - asum
fuga = math.ceil(hoge)

if fuga <= k:
    print(max(0, fuga))
else:
    print(-1)