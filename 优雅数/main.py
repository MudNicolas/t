l, r = map(int, input().split())


def check(x):
    l = ''
    for i in x:
        if i not in l:
            l += i
    if len(l) == 2:
        return True
    else:
        return False


ans = 0
for i in range(l, r+1):
    if check(str(i)):
        ans += 1
print(ans)
