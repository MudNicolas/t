s = [0 for i in range(26)]
for i in input():
    s[ord(i)-ord('a')] += 1
print(max(s))
