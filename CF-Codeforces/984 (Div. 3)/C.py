t = int(input())

for _ in range(t):
    s = list(input().strip())
    q = int(input())

    n = len(s)
    pos = set()

    def check1100(index):
        if 0 <= index <= n - 4:
            return s[index] == '1' and s[index + 1] == '1' and s[index + 2] == '0' and s[index + 3] == '0'
        return False

    for j in range(n - 3):
        if check1100(j):
            pos.add(j)

    for _ in range(q):
        i, v = map(int, input().split())
        i -= 1 

        if s[i] != str(v):
            s[i] = str(v) 

            for j in range(max(0, i - 3), min(n - 3, i + 1)):
                if check1100(j):
                    pos.add(j)
                else:
                    pos.discard(j)

        if pos:
            print("YES")
        else:
            print("NO")