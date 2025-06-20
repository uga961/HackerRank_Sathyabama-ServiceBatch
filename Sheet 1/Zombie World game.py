# Enter your code here. Read input from STDIN. Print output to STDOUT
B, N = map(int, input().split())
zombies = list(map(int, input().split()))
zombies.sort()

for z in zombies:
    if B < z:
        print("NO")
        break
    B -= (z % 2) + (z // 2)
else:
    print("YES")
