s=input()
mini=int(1e9)
for i in range(len(s) - 2):
    mini = min(mini, abs(753-int(s[i:i+3])))
print(mini)