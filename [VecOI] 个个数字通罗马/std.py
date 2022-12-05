n = int(input())
for i in range(0,n):
    s = input()
    l = len(s)
    s = s.replace('IIII','IV').replace('XXXX','XL').replace('CCCC','CD').replace('VIV','IX').replace('LXL','XC',).replace('DCD','CM')
    print(l - len(s))