def getDivisors(number):
    divisors = list()
    for i in range(1, int(number**0.5)+1):
        if(number%i==0):
            divisors.append(i)
            if(number/i != i and number/i != number):
                divisors.append(int(number/i))
    return divisors

def sumDivisors(number): return sum(getDivisors(number))

def main():
    amicables = set()
    for number in range(10001):
        dNumber = sumDivisors(number)
        dNumberr = sumDivisors(dNumber)

        if(dNumberr == number and dNumber != number):
            amicables.add(number)
            amicables.add(dNumber)
    print(sum(amicables))

if __name__ == "__main__":
    main()