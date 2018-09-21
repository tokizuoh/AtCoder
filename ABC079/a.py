A=input()
print(["No","Yes"][1==len(set(A[:3]))or 1==len(set(A[1:4]))or 1==len(set(A))])