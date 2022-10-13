n, m = map(int, input().split())
c = list(map(int, input().split()))
for i in range(m):
    t1, t2 = list(map(int, input().split()))
    t1 -= 1
    t2 -= 1
    c[t1], c[t2] = c[t2], c[t1]
ma = max(c)
for i in range(n):
    if c[i] == ma:
        print(i+1, end=' ')
