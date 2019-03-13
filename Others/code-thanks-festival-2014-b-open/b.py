A=[input() for i in [0]*3]
o=['+','*']

maxi = -1e9
for i in o:
    for j in o:
        maxi = max(maxi, eval(str(eval(A[0]+i+A[1]))+j+A[2]))
print(maxi)