def isPrime(number):
    for i in range(2, int(number**0.5)+1,1):
        if(number%i == 0): return False
    return True

def combinTester(a, b):
    counter = 0
    while True:
        testValue = counter**2 + a*counter + b
        if(testValue < 0): return counter
        if not isPrime(testValue):
            return counter
        
        counter += 1

maxPrime = 0
maxPrimeA = 0
maxPrimeB = 0

for a in range(-999, 1000):
    for b in range(-1000, 1001):
        result = combinTester(a, b)
        if(result > maxPrime):
            maxPrimeA = a
            maxPrimeB = b
            maxPrime = result

print(maxPrimeA * maxPrimeB)