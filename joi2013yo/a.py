A=[int(input()) for i in range(5)]
print(int(A[0]-max((A[1]+A[3]-1)/A[3],(A[2]+A[4]-1)/A[4])))