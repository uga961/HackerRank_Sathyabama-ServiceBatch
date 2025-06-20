def find_possible_N(x, a):
    results = set()

    for z in range(1, int(x**0.5) + 1):
        if x % z == 0:
            for divisor in [z, x // z]:
                y = x // divisor
                if (y - 1) % a == 0:
                    k = (y - 1) // a
                    if k >= 1:
                        n = k * divisor
                        results.add(n)

    if results:
        print(" ".join(map(str, sorted(results))))
    else:
        print("None")


x, a = map(int, input().split())

# Solve
find_possible_N(x, a)
