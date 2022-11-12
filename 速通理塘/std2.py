n,k=map(int,input().split())
df={}
minn=[114514]*(n+1)
for i in range(k):
    a,b=map(int,input().split())
    if not a in df:
        df[a]=[b]
    else:
        df[a].append(b)
    if not b in df:
        df[b]=[a]
    else:
        df[b].append(a)
minn[1]=0
def Dfs(now):
    for i in df[now]:
        if minn[i]>minn[now]+1:
            minn[i]=minn[now]+1
            Dfs(i)
Dfs(1)
print(minn[n])
