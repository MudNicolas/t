n = int(input())
t = []
for i in range(n):
    t.append(input().split())
ops = input()


def sp():
    for i in range(n):
        for j in range(n//2):
            t[i][j], t[i][n-j-1] = t[i][n-j-1], t[i][j]


def sz():
    for i in range(n//2):
        for j in range(n):
            t[i][j], t[n - i - 1][j] = t[n - i - 1][j], t[i][j]


for i in range(ops.count('1') % 2):
    sp()
for i in range(ops.count('2') % 2):
    sz()


for i in range(n):
    for j in range(n):
        print(t[i][j], end=' ')
    print()
