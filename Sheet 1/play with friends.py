import math

n, m, k = map(int, input().split())

area2 = 2 * n * m

if area2 % k != 0:
    print("NO")
else:
    x = n
    y = m
    g = math.gcd(k, n)
    x = n // g
    k = k // g

    g = math.gcd(k, m)
    y = m // g
    k = k // g

    if k != 1:
        x *= 2  # multiply one coordinate by 2 if k is still > 1
    print("YES")
    # print(0, 0)
    # print(x, 0)
    # print(0, y)
