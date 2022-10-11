s = input().split()
las = ''
ans = 1
for i in s:
    ans += (las != i)
    las = i
print(ans)
