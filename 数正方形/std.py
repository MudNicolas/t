dot = []
v = {}
for i in range(int(input())):
    t = list(map(int, input().split()))
    dot.append(t)
    v[(t[0], t[1])] = True
for i in range(len(dot)-1):
    for j in range(i+1, len(dot)-1):
        midx = (dot[i][0]+dot[j][0])/2
        midy = (dot[i][1]+dot[j][1])/2
        dx = abs(midx-dot[i][0])
        dy = abs(midy-dot[i][1])
        if dx % 1 != 0 or dy % 1 != 0:
            continue
