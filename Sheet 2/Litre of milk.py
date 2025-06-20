N = int(input())
R1 = int(input()) #plastic bottle milk
R2 = int(input()) #glass bottle milk
R3 = int(input()) #glass price

c1 = N//R1



c2 = int((N-R3)/(R2-R3))






print(max(c1, c2))