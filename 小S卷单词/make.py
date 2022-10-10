from main import main

path = './data'


def q():
    for i in range(1, 6):
        with open(path+'/suck'+str(i)+'.in', "r+", encoding="utf-8") as inf:
            data = inf.readlines()
            for i in range(len(data)):
                data[i] = data[i].strip()
            n_data = ' '.join(data)
            print(n_data)
            inf.seek(0, 0)
            inf.truncate()
            inf.write(n_data)


def makout():
    for i in range(1, 6):
        with open(path+'/suck'+str(i)+'.in', "r", encoding="utf-8") as inf:
            inp = inf.readline()
            ans = main(inp.split())
            with open(path+'/suck'+str(i)+'.out', "w", encoding="utf-8") as outf:
                outf.truncate()
                outf.write(str(ans))


if __name__ == '__main__':
    q()
    makout()
