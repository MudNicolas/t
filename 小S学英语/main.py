suck=input()
ans=input()
pos="ABCDEFG"
tot,cnt,c=0,0,[0]*26
def check(s):
    for i in range(7):c[i]=0
    for i in s:
        c[ord(i)-65]+=1
        if c[ord(i)-65]>1:
            return False
    return True
def get(s):
    res=0
    for i in range(5):
        if s[i]==ans[i]:
            res+=2
    return res
for i in range(7):
    for j in range(7):
        for k in range(7):
            s=suck+pos[i]+pos[j]+pos[k]
            if check(s):
                tot+=get(s)
                cnt+=1
print(round(tot/cnt,2))