s = input()
print(min(s.count('S') + (s.count('L') // 2) + 1, len(s)))
