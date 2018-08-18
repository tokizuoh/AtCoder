n = int(input())
MOD = int(1e9 + 7)

ans = 1
for i in range(1, n + 1):
    ans = (ans * i) % MOD

print(ans)