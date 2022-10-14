s = input()
l = len(s)
ans = 0
for i in range(l):
    for j in range(i+1, l):
        for k in range(j+1, l):
            if s[i] == 'C' and s[j] == 'O' and s[k] == 'W':
                ans += 1
print(ans)
