n, l, r = map(int, input().split())
print(r % n if l // n == r // n else n - 1)
