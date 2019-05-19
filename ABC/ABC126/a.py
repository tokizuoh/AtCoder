n, k = map(int, input().split())
s = input()

ans = ""
for i in range(n):
    if i == k - 1:
        ans += s[i].lower()
    else:
        ans += s[i]

print(ans)