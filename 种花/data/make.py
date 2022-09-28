from random import randint


def makein(T):
    n = randint(1, 1000)
    m = randint(1, 1000)
    a = []
    opera = []
    for i in range(n):
        a.append(randint(1, 100000))
    for i in range(m):
        l = randint(0, n-1)
        r = randint(0, n-1)
        if l > r:
            l, r = r, l
        if randint(0, 1):
            opera.append(
                f'add {l} {r} {randint(1,1000)*(1 if randint(0,1) else -1)}')
        else:
            opera.append(f'query {l} {r}')
    with open(f'rose{T}.in', 'w') as in_file:
        af = ''
        for i in a:
            af += str(i)+' '
        in_file.write(af.strip()+'\n')
        in_file.write(str(m)+'\n')
        for i in opera:
            in_file.write(i+'\n')


def fp(x, y):
    t = 0
    for i in range(x, y+1):
        t += a[i]
    return t


def cp(x, y, k):
    global a
    for i in range(x, y+1):
        a[i] += k


a = []


def makeout(T):
    with open(f'rose{T}.in', 'r') as in_file:
        in_data = in_file.readlines()
        global a
        ans = ""
        a = list(map(int, in_data[0].split()))
        m = int(in_data[1])
        opera = in_data[2:]
        for i in range(m):
            s = opera[i].split()
            if s[0] == 'query':
                ans += str(fp(int(s[1]), int(s[2])))+'\n'
            else:
                cp(int(s[1]), int(s[2]), int(s[3]))
        with open(f'rose{T}.out', 'w') as outfile:
            outfile.write(ans)


for i in range(10):
    makein(i)
    makeout(i)
