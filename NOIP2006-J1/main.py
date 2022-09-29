n = int (input ())
s = list (map (int, input (). split ()))
s.sort ()
res = [s[0]]
for i in range (1, n) :
    if s[i] != s[i - 1] :
        res += [s[i]]
print (len (res))
for i in res :
    print (i, end = ' ')