w = int(input())

s = 'DiscoPresentsDiscoveryChannelProgrammingContest2016'
for i in range(len(s) // w + 1 if len(s) % w else len(s) // w):
    print(s[i * w:min(i * w + w, len(s))])