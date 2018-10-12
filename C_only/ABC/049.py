A = ["dream", "dreamer", "erase", "eraser"]
for i in range(4):
    A[i] = A[i][::-1]

S = input()[::-1]
idx = 0
while idx < len(S):
    flag = False
    for i in range(4):
        if len(S) - idx < len(A[i]):
            continue
        else:
            if S[idx:idx+len(A[i])] == A[i]:
                flag = True
                idx += len(A[i])
                break
            else:
                continue
    if idx >= len(S) or flag == False:
        break

print(["NO","YES"][idx == len(S)])