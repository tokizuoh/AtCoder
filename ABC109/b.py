def main():
    n = int(input())
    
    tmp = ""
    f = True
    st = []
    for i in range(n):
        w = input()
        st.append(w)
        if i > 0:
            if tmp[-1] == w[0]:
                pass
            else:
                f = False
        tmp = w
    if len(list(set(st))) != n:
        f = False
    
    print("Yes" if f else "No")

if __name__ == "__main__":
    main()