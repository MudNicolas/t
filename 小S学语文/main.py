a = list(map(int, input().split()))
m = n = p = 0
for i in range(len(a)-1):
    if a[i+1] > a[i]:
        n += 1
    else:
        p = i-n
        m = max(a[p+n]-a[p], m)
        n = 0
print(m)
