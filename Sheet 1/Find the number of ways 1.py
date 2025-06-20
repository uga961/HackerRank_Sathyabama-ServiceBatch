import math

def number_of_ways(n, m, p, e):
    if p > n or e > m:
        return 0
    return math.comb(n, p) * math.comb(m, e)

n = int(input())
m = int(input())
p = int(input())
e = int(input())

print(number_of_ways(n, m, p, e))
