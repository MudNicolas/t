from std import main
file = './six'


def makeout(T):
    fin = open(file+str(T)+'.in', 'r')
    indata = fin.readlines()
    res = main(indata[0])
    with open(file+str(T)+'.out', 'w') as o:
        o.write(str(res))


for i in range(10):
    makeout(i)
