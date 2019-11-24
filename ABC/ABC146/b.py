n = int(input())
s = input()

A = [chr(i) for i in range(65, 65+26)]

ans = ""
for i in range(len(s)):
    a = A.index(s[i])
    idx = (a + n) % 26
    ans += A[idx]

print(ans)