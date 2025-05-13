t=int(input())
for _ in range(t):
    v=[]
    n, k = map(int, input().strip().split())
    for _ in range(k):
        b, c = map(int, input().strip().split())
        v.append(c)
    v.sort(reverse=True)
    maxx=sum(v[:min(n,k)])
    print(maxx)
    