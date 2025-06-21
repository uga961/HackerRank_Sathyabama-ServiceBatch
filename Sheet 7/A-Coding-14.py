n = int(input())
r = int(str(abs(n))[::-1])
if n < 0:
    r = -r
print(n - r)
