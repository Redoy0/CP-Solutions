t=int(input())
while t!=0:
    n=int(input())
    a=list(map(int,input().strip().split()))[1:n+1]
    for i in range(1,n+1):
        if a[i]==a[i+1]:
            a[i],a[n-i+1]=a[n-i+1],a[i]
    cnt=0
    for i in range(n-1):
        if a[i]==a[i+1]:
            cnt+=1
    print(cnt)
    t-=1