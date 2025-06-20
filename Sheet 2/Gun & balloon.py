import heapq

def max_active_minutes(n, k, balloons):
    balloons = [-b for b in balloons if b > 0]
    heapq.heapify(balloons)
    minutes = 0
    while len(balloons) >= k:
        temp = []
        for _ in range(k):
            b = -heapq.heappop(balloons)
            b -= 1
            if b > 0:
                temp.append(-b)
        for b in temp:
            heapq.heappush(balloons, b)
        minutes += 1
    return minutes

n = int(input())
k = int(input())
balloons = [int(input()) for _ in range(n)]
print(max_active_minutes(n, k, balloons))
