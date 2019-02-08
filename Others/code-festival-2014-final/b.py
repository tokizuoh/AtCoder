s = input()

f = ""
for i in range(len(s)):
    f += s[i]
    if i < len(s) - 1:
        if i % 2:
            f += '+'
        else:
            f += '-'
print(eval(f))