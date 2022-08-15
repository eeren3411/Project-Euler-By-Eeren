def getRecurring(number):
    divided = 1
    dividor = number
    digits = list()
    while divided%dividor != 0:
        divided = divided*10
        digit = divided//dividor
        if (divided, digit) in digits:
            return [digits[1] for digits in digits[digits.index((divided, digit)):]]
        digits.append((divided, digit))
        divided = divided%dividor

maxLen = 0
maxLenIndex = 0

for i in range(2, 1000):
    recur = getRecurring(i)
    if(recur == None): continue
    if len(recur) > maxLen:
        maxLenIndex = i
        maxLen = len(recur)
    
print(maxLenIndex)