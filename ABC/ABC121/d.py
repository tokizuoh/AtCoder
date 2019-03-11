def f(n):
    return [n, 1, n + 1, 0][n % 4]

def main():
    a, b = map(int, input().split())
    print(f(b) ^ f(max(0, a - 1)))

if __name__ == '__main__':
    main()