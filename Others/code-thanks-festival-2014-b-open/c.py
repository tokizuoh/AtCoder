n=int(input())
V=list(map(int,input().split()))
F=list(map(int,input().split()))
ans = 0
for i in range(n):
    ans += (V[i] // 2 + 1 <= F[i])
print(ans)