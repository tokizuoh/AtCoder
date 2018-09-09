def main():
    H, W = map(int, input().split())
    A = [list(map(int, input().split())) for _ in range(H)]
    
    B = []
    for i in range(H):
        for j in range(W):
            if A[i][j] % 2:
                if i < H - 1:
                    B.append(i + 1)
                    B.append(j + 1)
                    B.append(i + 2)
                    B.append(j + 1)
                    A[i][j] -= 1
                    A[i + 1][j] += 1
                    continue
                elif j < W - 1:
                    B.append(i + 1)
                    B.append(j + 1)
                    B.append(i + 1)
                    B.append(j + 2)
                    A[i][j] -= 1
                    A[i][j + 1] += 1
    
    print(int(len(B) / 4))
    for i in range(0, len(B), 4):
        for j in range(i, i + 4):
            if j != i :
                print("", B[j], end = "")
            else:
                print(B[j], end = "")
        print()

if __name__ == "__main__":
    main()
