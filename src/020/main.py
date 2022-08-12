mult = 1
for i in range(2, 101):
    mult *= i

sumValue = 0
for digit in str(mult):
    sumValue += int(digit)

print(sumValue)