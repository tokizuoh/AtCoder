n, k = map(int, input().split())
H = list(map(int, input().split()))
H = sorted(H)[::-1]

cnt = 0
for i in range(n):
    if i < k:
        pass
    else:
        cnt += H[i]

print(cnt)