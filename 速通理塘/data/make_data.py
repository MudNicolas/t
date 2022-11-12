import random as r
f=open("1.in","w")
n=10
k=20
m=6
df={}
for i in range(1,n+1):
    df[i]=[False]*(n+1)
print(n,k,file=f)
lst=1
for i in range(1,m):
    now=r.randint(1,n-1)
    while df[now][lst]==True or now==lst:
        now=r.randint(2,n-1)
    df[now][lst]=df[lst][now]=True
    print(lst,now,file=f)
    lst=now
print(lst,n,file=f)
for i in range(m+1,k+1):
    a=r.randint(1,n)
    b=r.randint(1,n)
    while df[a][b] or a==b:
        a=r.randint(1,n)
        b=r.randint(1,n)
    print(a,b,file=f)
f.close()
