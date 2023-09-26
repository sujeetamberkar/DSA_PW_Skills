import heapq

def maxMin(operations, x):
    # elements = set()
    # ordered = []
    # products = []
    
    # for op, value in zip(operations, x):
    #     if op == 'push':
    #         elements.add(value)
    #         ordered.append(value)
    #         ordered.sort()  # Ensure the list remains sorted
    #     elif op == 'pop' and value in elements:
    #         elements.remove(value)
    #         ordered.remove(value)
        
    #     # If there are elements present
    #     if ordered:
    #         min_val = ordered[0]
    #         max_val = ordered[-1]
    #         products.append(min_val * max_val)
    #     else:
    #         products.append(0)  # or whatever is required when no elements are present

    # return products
    elements = set()
    min_heap = []  # min heap to keep track of minimum elements
    max_heap = []  # max heap to keep track of maximum elements
    products = []
    
    for op, value in zip(operations, x):
        if op == 'push':
            elements.add(value)
            heapq.heappush(min_heap, value)
            heapq.heappush(max_heap, -value)  # Negate the value for max heap
        elif op == 'pop':
            elements.remove(value)
            # Ensure the heaps are clean by removing outdated values
            while min_heap and min_heap[0] not in elements:
                heapq.heappop(min_heap)
            while max_heap and -max_heap[0] not in elements:
                heapq.heappop(max_heap)
        
        # If there are elements present
        if min_heap and max_heap:
            min_val = min_heap[0]
            max_val = -max_heap[0]
            products.append(min_val * max_val)

    return products



# Test
operations = ["push", "push", "push", "pop"]
x = [1, 2, 3, 1]
print(maxMin(operations, x))  # Expected output: [1, 2, 3, 6]

"""
Question : Product of the Maximum and Minimum in a Dataset

Starting with an empty set of integers named elements, perform the following query operations:
• The command push x inserts the value of into elements.
• The command pop removes the value of x from elements.

The integers in elements need to be ordered in such a way that after each operation is performed, the product of the maximum and minimum values in the set can be easily calculated.

Function Description
Complete the function maxMin in the editor below.

maxMin has the following parameter(s):
	 string operations[n]: an array of operations strings 
	 int ×[n]: an array of x where ×[i] goes with operations[i].
Returns :
	 int[n] an array of long integers that denote the product of the maximum and minimum of elements after each query

Explanation
Visualize elements as an empty multiset, elements = (, and refer to the return array as
products. The sequence of operations occurs as follows:
	0. push 1 -+ elements = {1), so the minimum = 1 and the maximum = 1. Then store the product as
	products0 = 1 × 1 = 1.
	
	1. push 2 - elements = {1, 2}, so the minimum = 1 and the maximum = 2. Then store the product as
	products1, = 1 × 2 = 2.
	
	2. push 3 -+ elements = {1, 2, 3}, so the minimum = 1 and the maximum = 3. Then store the product as
	products2 = 1 × 3 = 3.
	3. pop 1 - elements = {2, 37, so the minimum = 2 and the maximum = 3. Then store the product as
	products3 = 2 × 3 = 6.
	
	Return products = [1, 2, 3, 6]
    
"""