import sys

chess = [[0 for i in range(8)] for j in range(8)]
count = 0

for i in range(8):
    cmd = str(sys.stdin.readline().rstrip())
    for j in range(8):
        chess[i][j] = cmd[j]
        if chess[i][j] == "F":
            if i % 2 == 0:
                if j % 2 == 0:
                    count += 1
            else:
                if j % 2 == 1:
                    count += 1

print(count)