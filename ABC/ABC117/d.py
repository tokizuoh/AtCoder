n, k = map(int, input().split())
A = list(map(int, input().split()))

if n == 1:
    print(A[0])
    exit()

digitmax = -1e9
D = []
for a in A:
    abin = len(bin(a)[2:])
    digitmax = max(digitmax, abin)
    D.append(bin(a)[2:])

kbin = len(bin(k)[2:])

for i in range(n):
    D[i] = '0' * (digitmax - len(D[i])) + D[i]

bbin = bin(k)[2:]
if kbin > digitmax:
    ans = sum(A)
    for i in range(digitmax):
        if(bbin[i] == '1'):
            ans += (2 ** (kbin - i - 1)) * n
    print(ans)
    exit()



if kbin == digitmax:
    cnt = 0
    for i in range(digitmax):
        t = 0
        for j in range(n):
            if D[j][i] == '1':
                t += 1
        if bbin[i] == '1':
            cnt += max(t, n - t) * (2 ** (digitmax - 1 - i))
        else:
            cnt += t * (2 ** (digitmax - 1 - i))
    print(cnt)
    exit()

cnt = 0
if kbin < digitmax:
    for i in range(digitmax):
        t = 0
        if digitmax - kbin <= i:
            for j in range(n):
                if D[j][i] == '1':
                    t += 1
            if bbin[i] == '1':
                cnt += max(t, n - t) * (2 ** (digitmax - 1 - i))
            else:
                cnt += t * (2 ** (digitmax - 1 - i))
        else:
            for j in range(n):
                if D[j][i] == '1':
                    t += 1
            if bbin[i] == '1':
                cnt += max(t, n - t) * (2 ** (digitmax - 1 - i))
            else:
                cnt += t * (2 ** (digitmax - 1 - i))
    print(cnt)
    exit()