s = input()
k = [[], [], ['a', 'b', 'c'], ['d', 'e', 'f'], ['g', 'h', 'i'], ['j', 'k', 'l'], [
     'm', 'n', 'o'], ['p', 'q', 'r', 's'], ['t', 'u', 'v'], ['w', 'x', 'y', 'z']]
ans = ' '
for i in s:
    for j in k:
        if i in j:
            t = (j.index(i)+1)*str(k.index(j))
            if t[0] == ans[-1]:
                t = '#'+t
            ans += t
print(ans[1:])
