from main import main


def format(str):
    return str.strip()+'\n'


def format_infile(T):
    with open(f'./data/suck{T}.in', 'r+') as f:
        data = list(map(format, f.readlines()))
        f.seek(0, 0)
        # print(data)
        f.write(''.join(data))


def makeout(T):
    with open(f'./data/suck{T}.in', 'r') as f:
        print(main(''.join(f.readlines())))


if __name__ == '__main__':
    for i in range(1, 6):
        format_infile(i)
        makeout(i)
