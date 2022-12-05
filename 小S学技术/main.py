defense = list(map(int, input().split()))
attack = list(map(int, input().split()))
m = len(defense)
n = len(attack)
attack.sort()
defense.sort()
pa = 0
ans = 0
ok = True
for i in range(m):
    while attack[pa] <= defense[i] and pa < n:
        ans += attack[pa]
        pa += 1
    pa += 1
    if i < m-1 and pa == n:
        ok = False
if ok == False:
    print(0)
else:
    while pa < n:
        ans += attack[pa]
        pa += 1
    print(ans)
