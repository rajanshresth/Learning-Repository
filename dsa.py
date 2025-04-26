def topKFrequent(nums, k):
    freq_map = {}

    # Count frequencies
    for num in nums:
        if num in freq_map:
            freq_map[num] += 1
        else:
            freq_map[num] = 1

    # Convert to list of tuples and sort by frequency (highest first)
    sorted_freq = sorted(freq_map.items(), key=lambda x: x[1], reverse=True)

    # Take top k elements
    result = [item[0] for item in sorted_freq[:k]]
    return result


print(topKFrequent(nums = [1,2,2,3,3,3], k = 2)) # Output: [2,3]
print(topKFrequent(nums = [1], k = 1)) #Output: [1]
print(topKFrequent(nums = [1,1,1,2,2,3], k = 2)) # Output: [1,2]