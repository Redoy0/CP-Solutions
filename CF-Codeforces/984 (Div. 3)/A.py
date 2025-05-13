t=int(input())
for _ in range(t):
    n=int(input())
    f=0
    a=list(map(int,input().strip().split()))[:n]
    for i in range(n-1):
        if abs(a[i]-a[i+1])!=5 and abs(a[i]-a[i+1])!=7:
            f=1
            break
     
    if f==0:
        print("YES")
    else:
        print("NO")