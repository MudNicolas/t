defense = list(map(int, input().split()))
attack = list(map(int, input().split()))
defense.sort()
attack.sort()
i = j = 0
while i < len(defense) and j < len(attack):
    if attack[j] > defense[i]:
        attack[j] = 0
        defense[i] = 0
        i += 1
        j += 1
    else:
        j += 1
if sum(defense) == 0:
    print(sum(attack))
if sum(attack) == 0:
    print(0)
