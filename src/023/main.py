import enum


def getDivisors(number):
    divisors = list()
    for i in range(1, int(number**0.5)+1):
        if(number%i==0):
            divisors.append(i)
            if(number/i != i and number/i != number):
                divisors.append(int(number/i))
    return divisors

def numType(number):
    divSum = sum(getDivisors(number))
    if divSum > number:
        return 1
    if divSum < number:
        return -1
    return 0

ABUNDANTS = [i for i in range(1, 28112) if numType(i) == 1]
LIMIT = 28123

def isSumAbundant(number):
    global ABUNDANTS
    for abundant in ABUNDANTS:
        if (number-abundant) in ABUNDANTS:
            return True
    return False

sumAbundants = set()

for index, abundant in enumerate(ABUNDANTS[:-1]):
    for abundantt in ABUNDANTS[index:]:
        if(abundant + abundantt) > LIMIT: break
        sumAbundants.add(abundant+abundantt)

totalNumbers = LIMIT*(LIMIT+1)/2
print(totalNumbers - sum(sumAbundants))