n, k = map(int, input().split())
vis = [False]*(n+1)
for i in range(2, n+1):
    if vis[i]:
        continue
    for j in range(i+i, n+1, i):
        if vis[j]:
            continue
        vis[j] = True
        k -= 1
        if k == 0:
            print(j)
            vis[0] = True
    if vis[0]:
        break
