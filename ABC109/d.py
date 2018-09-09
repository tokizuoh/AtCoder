def main():
    H, W = map(int, input().split())
    A = [list(map(int, input().split())) for _ in range(H)]
    
    B = []
    for i in range(H):
        for j in range(W):
            if A[i][j] % 2:
                if i < H - 1:
                    B.append(map(str, [i + 1, j + 1, i + 2, j + 1]))
                    A[i][j] -= 1
                    A[i + 1][j] += 1
                    continue
                elif j < W - 1:
                    B.append(map(str, [i + 1, j + 1, i + 1, j + 2]))
                    A[i][j] -= 1
                    A[i][j + 1] += 1
    
    print(len(B))
    for b in B:
        print(" ".join(b))

if __name__ == "__main__":
    main()
