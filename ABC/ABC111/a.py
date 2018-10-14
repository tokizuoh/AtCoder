N=input()
for i in range(3):
    if i < 2:
        if N[i] == "1":
            print("9",end="")
        else:
            print("1",end="")
    else:
        if N[i] == "1":
            print("9")
        else:
            print("1")