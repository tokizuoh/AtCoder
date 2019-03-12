n = int(input())
s = [input() for _ in range(n)]
t = []
for i in range(n - 1):
    for j in range(i + 1, n):
        t.append(s[i] + s[j])
        t.append(s[j] + s[i])
print(min(t))