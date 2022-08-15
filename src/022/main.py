def getScore(index, name):
    score = 0
    for char in name:
        score = score + (ord(char) - ord('A') +1)
    score = score*(index+1)
    return score

nameFile = open("./names.txt", "r")
names = nameFile.read().split(",")
nameFile.close()

names.sort()

totalScore = 0
for index, name in enumerate(names):
    totalScore = totalScore + getScore(index, name[1:-1])

print(totalScore)