n, now, day = int (input ()), 0, 1
while day <= n :
    n -= day
    now += day * day
    day += 1
print (now + n * day)