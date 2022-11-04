n, k = map(int, input().split())
res = 1.0
ans = 0
while res > 1-k/100:
    res = res*(n-ans)/n
    ans += 1
print(ans)
