A = int(input())
S = input()
for s in S:
    if A == 0:
        print("Yes")
        exit()
    A += 1 if s == '+' else -1
print("No" if A  else "Yes")