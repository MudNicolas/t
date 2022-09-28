a = list(map(int, input().split()))
m = int(input())


def fp(x, y):
    t = 0
    for i in range(x, y+1):
        t += a[i]
    print(t)


def cp(x, y, k):
    global a
    for i in range(x, y+1):
        a[i] += k


for i in range(m):
    s = input().split()
    if s[0] == 'query':
        fp(int(s[1]), int(s[2]))
    else:
        cp(int(s[1]), int(s[2]), int(s[3]))
