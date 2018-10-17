T = int(input())
S = [input() for i in range(T)]
for s in S:
    i = 0
    ans = 0
    while i+5 <= len(s):
        if s[i:i+5] in ["tokyo", "kyoto"]:
            ans += 1
            i += 5
        else:
            i += 1
    print(ans)