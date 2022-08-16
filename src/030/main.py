def sumPowerDigits(number):
    sumPower = 0
    for digit in str(number):
        sumPower = sumPower + (int(digit)**5)
    return sumPower

totalSum = 0
for i in range(2, 354294): # 354294 is highest number  you can achieve by 6*9^5, after that point you're losing hard
    if i == sumPowerDigits(i):
        totalSum += i
        print(i)

print("-----")
print(totalSum)