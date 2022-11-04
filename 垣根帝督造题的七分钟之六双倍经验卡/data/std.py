from math import log2, ceil


def main(x):
    return ceil(log2(int(x)))+1


if __name__ == '__main__':
    print(main(input()))
