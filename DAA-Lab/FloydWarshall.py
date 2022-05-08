def floydWarshall(graph):
	dist = list(map(lambda i: list(map(lambda j: j, i)), graph))

	for k in range(V):
		for i in range(V):
			for j in range(V):
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

	printSolution(dist)

def printSolution(dist):
	print("Following matrix shows the shortest distances between every pair of vertices: ")

	for i in range(V):
		for j in range(V):
			if(dist[i][j] == 99999):
				print("INF")
			else:
				print(dist[i][j])

			if j == V-1:
				print("")

V = int(input("Enter no. of vertices: "))
graph = []
for i in range(V):
    temp_arr = []
    
    for j in range(V):
        ele = input(f"Enter element {i}{j}: ")
        if ele.isalpha() or ele == "INF":
            ele = 99999
        else:
            ele = int(ele)

        temp_arr.append(ele)
    
    graph.append(temp_arr)

floydWarshall(graph)