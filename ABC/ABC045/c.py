S = input()
total = 0
for i in range(1 << (len(S) - 1)):
    tmp = ""
    for j in range(len(S)):
        tmp += S[j]
        if (i >> j) & 1 == 1:
            tmp += "+"
    else:
        total += eval(tmp)
else:
    print(total)