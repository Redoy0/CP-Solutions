t=int(input())

while t!=0:
    a=[]
    n=int(input())
    for i in range(n):
        temp=[]
        temp=list(map(int,input().strip().split()))[:n]
        a.append(temp)      
    total=0
    for i in range(0,n):
        maximum=0
        for j in range(0,n):
            if i+j>n:
                break
            maximum=max(maximum, -a[i+j][j])
        total+=maximum
    for i in range(1,n):
        maximum=0
        for j in range(0,n):
            if i+j>n:
                break
            maximum=max(maximum, -a[j][i+j])
        total+=maximum
    print(total)
    
    t-=1