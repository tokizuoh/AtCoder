S=input()
op=["+","-"]
for a in op:
    for b in op:
        for c in op:
            f=S[0]+a+S[1]+b+S[2]+c+S[3]
            if eval(f)==7:
                print(f+"=7")
                exit()