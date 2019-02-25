N = int(input())
w = [int(input()) for _ in range(N)]

A = []
for i in range(N):
    for j in range(len(A)):
        if A[j] >= w[i]:
            A[j] = w[i]
            break
    else:
        A.append(w[i])

print(len(A))