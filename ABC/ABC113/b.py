n = int(input())
t, a = map(int, input().split())
H = list(map(int, input().split()))

tikai = 1e9
idx = 1e9
for i in range(len(H)):
    tmp = t - H[i] * 0.006
    if tikai > abs(a - tmp):
        idx = i + 1
        tikai = abs(a - tmp)
print(idx)