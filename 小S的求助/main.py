n=int(input());maxv,ans=0,''
for i in range(n):
    s=input()
    s1=input()
    cnt=0
    for j in range(len(s1)-2):
        if s1[j:j+3]=='sos':
            cnt+=1
    if cnt>maxv:
        maxv=cnt
        ans=s
    elif cnt==maxv: ans+=' '+s
print(maxv)
print(ans)
