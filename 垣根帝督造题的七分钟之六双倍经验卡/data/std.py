from math import log2, floor


def main(x):
    return floor(log2(int(x)+1)+1)


if __name__ == '__main__':
    print(main(input()))
