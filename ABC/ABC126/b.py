s = input()
a = int(s[:2])
b = int(s[2:])
if 1 <= a <= 12 and 1 <= b <= 12:
    print("AMBIGUOUS")
    exit()
if 1 <= a <= 12:
    print("MMYY")
    exit()
if 1 <= b <= 12:
    print("YYMM")
    exit()
print("NA")