s = input()
d = 1e9
for i in range(len(s) - 2):
    a = int(s[i:i + 3])
    d = min(d, abs(a - 753))
print(d)