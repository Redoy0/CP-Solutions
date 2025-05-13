t = int(input())
testC = []
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    testC.append((n, a))

res = []

for n, a in testC:
    preSum = 0
    sumIdx = {0: -1}
    count = 0
    lastIdx = -1 

    for i in range(n):
        preSum += a[i]


        if preSum in sumIdx and sumIdx[preSum] >= lastIdx:
            count += 1
            lastIdx = i

        sumIdx[preSum] = i

    res.append(count)

for r in res:
    print(r)