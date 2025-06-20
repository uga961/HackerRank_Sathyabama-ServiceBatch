import sys
sys.setrecursionlimit(10000)

n = int(input())
i = int(input())
x = int(input())

dp = {}

def count_ways(pos):
    if pos == n:
        return 1
    if pos > n:
        return 0
    if pos in dp:
        return dp[pos]
    ways = 0
    for j in range(1, x + 1):
        ways += count_ways(pos + j)
    dp[pos] = ways
    return ways

print(count_ways(i))
