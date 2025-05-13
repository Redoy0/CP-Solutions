
t = int(input())
for _ in range(t):
    m1=m2=float('-inf')
    n = int(input())
    stamps = []
    for _ in range(n):
        w, h = map(int, input().split())
        m1=max(m1,w)
        m2=max(m2,h)
    print(2*(m1+m2))