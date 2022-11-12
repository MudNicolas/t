def std(t, a):
    n = 1
    f = h = 0
    d = {1: 0}
    while d[n] != 1:
        d[n] += 1
        n = a[n-1]
        if n not in d:
            d[n] = 0
        f += 1
    while d[n] != 2:
        d[n] += 1
        n = a[n-1]
        h += 1

    t = (t-f) % h+f
    n = 1
    for i in range(t):
        n = a[n-1]
    return n


if __name__ == '__main__':
    t = int(input())
    a = list(map(int, input().split()))
    print(std(t, a))
