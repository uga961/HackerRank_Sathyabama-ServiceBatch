n, t = map(int, input().split())
piles = list(map(int, input().split()))

xor_sum = 0
for pile in piles:
    xor_sum ^= pile

if xor_sum == 0:
    print(2 if t == 1 else 1)
else:
    print(t)
