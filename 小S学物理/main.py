import math
g = 10.0
v, th = map(float, input().split())
vy = v*math.cos(th)
vx = v*math.sin(th)
t = vy/g
x2 = vx*t
print(round(x2, 1), round((x2/2)*vy/vx, 1))
