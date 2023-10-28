def find_combinations(noOfWatches, prices, K):
    if noOfWatches == 1:
        return 0

    price_dict = {}
    for price in prices:
        price_dict[price] = price_dict.get(price, 0) + 1

    count = 0
    prices_set = set(prices)

    for price, freq in price_dict.items():
        if K == 0:
            count += (freq * (freq - 1)) // 2
        else:
            if price + K in prices_set:
                count += freq * price_dict[price + K]

    return count


# Testing the updated function on the test cases
noOfWatches = int(input())
prices = list(map(int, input().split()))
K = int(input())

# Output
print(find_combinations(noOfWatches, prices, K))