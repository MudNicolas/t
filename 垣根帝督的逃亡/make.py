for i in range(10):
    with open(f'./scape{i}.in') as f:
        ind = f.readlines()
        rind = ind[0].split()[1]+'\n'
        for j in range(1, len(ind)):
            rind += ind[j].strip()+' '
    with open(f'./scape{i}.in', 'w') as f:
        f.write(rind)
