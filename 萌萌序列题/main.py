

def main(s):
    t = 0
    for i in s:
        if "A" <= i <= 'Z':
            t += ord(i)-ord('A')+1
        if 'a' <= i <= 'z':
            t += ord(i)-ord('a')+1
    return t % 10001


if __name__ == '__main__':
    s = input()
    print(main(s))
