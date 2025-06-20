def min_operations(n, A, B):
    A = list(A)
    B = list(B)
    
    for i in range(n):
        if A[i] < B[i]:
            return -1
    
    moves = 0
    
    for ch in reversed('abcdefghijklmnopqrstuvwxyz'):
        indices = []
        for i in range(n):
            if B[i] == ch and A[i] != B[i]:
                indices.append(i)
        
        if not indices:
            continue
        
        min_char = min([A[i] for i in indices])
        if min_char > ch:
            found = False
            for i in range(n):
                if A[i] == ch:
                    indices.append(i)
                    found = True
                    break
            if not found:
                return -1
        
        for i in indices:
            A[i] = ch
        moves += 1
    
    return moves

n = int(input())
A = input()
B = input()
print(min_operations(n, A, B))