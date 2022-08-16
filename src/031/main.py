def changes(amount, coins):
    ways = [0] * (amount + 1)
    ways[0] = 1
    for coin in coins:
        for j in range(coin, amount + 1): 
            ways[j] += ways[j - coin] # dark magician level coding stole from the internet xDé
    return ways[amount]

coins = [1, 2, 5, 10, 20, 50, 100, 200]

print(changes(200, coins))