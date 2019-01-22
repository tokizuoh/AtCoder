N = int(input())
p = [int(input()) for _ in range(N)]

ans = sum(p) - int(max(p) // 2)
print(ans)