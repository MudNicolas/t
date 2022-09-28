n=int(input())
cnt,now,ans=1,1,0
while now<=n:
    ans+=1
    now+=cnt
    cnt+=1
print(ans)
