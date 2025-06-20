n, k = list(map(int, input().split()))
F = list(map(int, input().split()))

c = 0

m = 0
for i in F:
    if i<k:
        c+=1
    else:
        m = max(c, m)
        c = 0
m = max(c, m)
        
print(m)


