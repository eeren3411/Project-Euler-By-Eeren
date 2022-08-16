def sumPowerDigits(number):
    sumPower = 0
    for digit in str(number):
        sumPower = sumPower + (int(digit)**5)
    return sumPower

totalSum = 0
for i in range(2, 1000000):
    if i == sumPowerDigits(i):
        totalSum += i
        print(i)

print("-----")
print(totalSum)