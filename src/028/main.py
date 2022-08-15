def getSpiralSum(dims):
    radius = dims//2+1
    spiralSum = 1
    position = 1
    for i in range(1, radius):
        step = 2*i
        for j in range(4):
            position += step
            spiralSum += position
    return spiralSum

print(getSpiralSum(1001))