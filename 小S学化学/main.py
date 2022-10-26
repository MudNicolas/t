s=['qyakioi','s','p','d','f']
c=[114514,2,6,10,14]
ans=[[0]*11 for i in range (11)]
n=int(input())
i,j,nowi,nowj,lasi,lasj=1,1,1,1,1,1
while n>0:
    if n>c[nowj]:
        n-=c[nowj];
        ans[nowi][nowj]=c[nowj]
        lasi,lasj=nowi,nowj
        nowj-=1;nowi+=1
        if nowj==0:
            if j<i: j+=1
            else : i+=1
            nowi,nowj=i,j
    else:
        ans[nowi][nowj]=n
        if nowi!=lasi and (ans[nowi][nowj]+1==c[nowj]//2 or ans[nowi][nowj]+1==c[nowj]) and ans[lasi][lasj]-1==c[lasj]//2:
            ans[nowi][nowj]+=1
            ans[lasi][lasj]-=1
        break
for i in range(1,11):
    if ans[i][1]==0: break
    res=str(i)+'s'+str(ans[i][1])
    for j in range(2,5):
        if ans[i][j]==0: break
        res+=' '+str(i)+s[j]+str(ans[i][j])
    print(res)