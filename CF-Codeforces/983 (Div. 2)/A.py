t= int(input())
for _ in range(t):
    n = int(input())
    a=list(map(int,input().strip().split()))[:2*n]
    c0=a.count(0)
    c1=a.count(1)
    if c0==0:
        print(0,0)
    else:
        if c0>=c1:
            print(c0%2,c1)
        else:
            print(c1%2,c0)


    