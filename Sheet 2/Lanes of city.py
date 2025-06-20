n = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())


lane1 = set(b + i * a for i in range(n))
lane2 = (d + i * c for i in range(n))


found = False
for fuel in lane2:
    if fuel in lane1:
        print(fuel)
        found = True
        break

if not found:
    print("No same amount of fuel found")
