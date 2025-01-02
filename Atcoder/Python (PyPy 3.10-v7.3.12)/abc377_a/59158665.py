grid = [input().strip() for _ in range(8)]

rows = set()
cols = set()

for i in range(8):
    for j in range(8):
        if grid[i][j] == '#':
            rows.add(i)
            cols.add(j)

count = 0
for i in range(8):
    for j in range(8):
        if grid[i][j] == '.':
            if i not in rows and j not in cols:
                count += 1

print(count)