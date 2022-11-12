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
#print(df)
import queue
que=queue.Queue()
que.put(1)
minn[1]=0
flag=False
while not que.empty():
    now=que.get()
    for i in df[now]:
        if minn[i]==114514:
            minn[i]=minn[now]+1
            que.put(i)
            if i==n:
                print(minn[i])
                flag=True
                break
    if flag:
        break
