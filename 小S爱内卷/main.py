a=list(map(int,input().split()))
n=len(a)
ans=now=a[0]
for i in range(1,n):
    if now<0:
        now=a[i]
    else:
        now+=a[i]
    ans=max(ans,now)
print(ans)