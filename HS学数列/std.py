s = list(map(int, input().split()))
print(s[0], end=' ')
for i in range(1, len(s)):
    s[i] = s[i]*(i+1)
    print(s[i]-s[i-1], end=' ')
