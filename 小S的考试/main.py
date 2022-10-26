n, q = map(int, input().split())
task = {}
for i in range(n):
    Q, A = input().split()
    task[Q] = A
for i in range(q):
    q, a, b, c, d = input().split()
    if(a == task[q]):
        print("A")
    elif(b == task[q]):
        print("B")
    elif(c == task[q]):
        print("C")
    else:
        print("D")
