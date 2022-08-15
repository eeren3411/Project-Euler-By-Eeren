from itertools import permutations

NUMBERS = list(range(0, 10))
perms = sorted(permutations(NUMBERS))

print("".join(map(str, perms[1000000-1])))