a = [0]*26
for i in input():
    a[ord(i)-65] += 1
for i in a:
    if i > 2:
        print('No')
        break
else:
    print('Yes')
