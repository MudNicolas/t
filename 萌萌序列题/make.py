from main import main
from random import randint


def makedata(T):
    length = randint(10**(T) if T <= 5 else 10**5,
                     10**(T+1) if T <= 5 else 10**6)
    print(length)
    s = ""
    for i in range(length):
        s += chr(randint(32, 126))
    ans = main(s)
    with open(f'./data/prefect{T}.in', 'w') as infile:
        infile.write(s)
    with open(f'./data/prefect{T}.out', 'w') as outfile:
        outfile.write(str(ans))


for i in range(10):
    makedata(i)
