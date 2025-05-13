
t = int(input())
for _ in range(t):
    n = int(input())
    a=list(map(int,input().strip().split()))[:n]
    minimum=9999999999
    for i in range(n):
        cnt=i
        for j in range(i+1,n):
            if a[j]>a[i]:
                cnt+=1
        minimum=min(minimum,cnt)
    print(minimum)
            
        