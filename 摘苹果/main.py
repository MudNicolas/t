l = list(map(int, input().split()))
n = int(input())+30
t = 0
for i in l:
    if i <= n:
        t += 1
print(t)
