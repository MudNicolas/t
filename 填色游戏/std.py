n, m = map(int, input().split())

a = []
b = []
for i in range(m):
    s = input().split()
    a.append(int(s[0]))
    b.append(int(s[1]))
if m == 0:
    if n % 2 == 1:
        print("FXT")
    else:
        print("XXY")
else:
    fg = 0
    for i in range(1, m):
        if b[i-1] == b[i]:
            fg = not fg
    v = a[0]-1
    if fg:
        if v % 2 == 0:
            v += 1
        else:
            v -= 1
    if v == n-a[m-1]:
        print("XXY")
    else:
        print("FXT")
