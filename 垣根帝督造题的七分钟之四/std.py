n, m, k = map(int, input().split())
a = [int(input()) for i in range(n)]
tot = 0
for i in range(2**n):
    p = -1
    t = 0
    while i > 0:
        p += 1
        w = i % 2
        i //= 2
        t += w*a[p]
    if t+k >= m:
        tot += 1
print(tot)
