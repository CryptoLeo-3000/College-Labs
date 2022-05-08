from itertools import combinations
  
def subsetSum(n, arr, x):
    for i in range(n):
        for subset in combinations(arr, i):
            if sum(subset) == x:
                print(list(subset))

set = []
subset = []
n = int(input("Enter the no. of values in set: "))

print("Enter values in the set: ")
for i in range(n):
    set.append(int(input(f"Set value {i+1}: ")))

target_sum = int(input("Enter target sum: "))

print(f"Set: {set}")
print(f"Subsets are:")
subsetSum(n, set, target_sum)