n, s = input().split()
n = int(n)
ans = ''
m = len(s)
j = m-1
while int(s[j]) == 0:
    j -= 1
for i in range(m):
    if int(s[i]) == 0:
        continue
    ans += s[i]+'*'+str(n)+'^'+str(m-i-1)
    if i < j:
        ans += '+'
print(ans)
