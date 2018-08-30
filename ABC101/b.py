def main():
    N = input()
    S = 0
    for n in N:
        S += int(n)
    print("No" if int(N) % S else "Yes")

if __name__ == '__main__':
    main()