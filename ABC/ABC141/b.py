s = input()
for i in range(len(s)):
    if i % 2 == 0:
        if s[i] in "RUD":
            pass
        else:
            print("No")
            exit()
    else:
        if s[i] in "LUD":
            pass
        else:
            print("No")
            exit()
print("Yes")