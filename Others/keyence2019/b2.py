S = input()
K = 'keyence'

kn = 0
bf = False
las = False

tmp = ""
for i in range(len(S)):
    # もしKのindexが6を超える（全てOK）の場合抜ける
    if kn == 7:
        break

    # もし今見てるSとKが同じだったらKのindexをインクリメント
    # もし部分文字列を削除済みならもう削除する部分文字列は無い    
    if S[i] == K[kn]:
        kn += 1
        if bf == True:
            bf = False
            las = True
    else:
        if bf == False:
            tmp += S[i]
            bf = True
            continue
        elif bf == True and las == False:
            tmp += S[i]
            continue
        elif bf == True and las == True:
            break

if kn == 7 or S.replace(tmp, ''):
    print('YES')
else:
    a = 0
    b = 6
    agr = 0
    St = 0
    La = len(S)
    for i in range(St, len(S)):
        if a >= b:
            break
        if S[i] == K[a]:
            a += 1
            for j in range(La-agr-1, 0, -1):
                if S[j] == K[b]:
                    b -= 1
                    agr+= 1
                    break
                    if a == b:
                        print("YES")
                        exit()
    print("NO")
    exit()