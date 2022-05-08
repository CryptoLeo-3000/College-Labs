import math

def minimax (curDepth, nodeIndex, maxTurn, scores, targetDepth):
    if (curDepth == targetDepth):
        return scores[nodeIndex]
    
    if (maxTurn):
        print(scores[nodeIndex])
        return max(minimax(curDepth + 1, nodeIndex * 2, False, scores, targetDepth), minimax(curDepth + 1, nodeIndex * 2 + 1, False, scores, targetDepth))
    else:
        print(scores[nodeIndex])
        return min(minimax(curDepth + 1, nodeIndex * 2, True, scores, targetDepth), minimax(curDepth + 1, nodeIndex * 2 + 1, True, scores, targetDepth))

# 3 5 2 9 12 5 23 23
n = int(input("Enter no. of terminal values: "))
scores = []
print("Enter terminal values: ")
for i in range(n):
    scores.append(int(input(f"Terminal Value {i+1}: ")))
treeDepth = math.log(len(scores), 2)

# print("The optimal value is : \n", end = "")
final = minimax(0, 0, True, scores, treeDepth)
print(f"Final optimal value: {final}")