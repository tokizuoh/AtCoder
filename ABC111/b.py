N=int(input())
A=[111 * i for i in range(1, 10)]
for a in A:
    if N <= a:
        print(a)
        exit()