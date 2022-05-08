from collections import defaultdict

def minDistance(dist,queue):
	minimum = float("Inf")
	min_index = -1

	for i in range(len(dist)):
		if dist[i] < minimum and i in queue:
			minimum = dist[i]
			min_index = i
	return min_index

def printPath(parent, j):
	if parent[j] == -1 :
		print(j, end=" ")
		return
	printPath(parent, parent[j])
	print(j, end=" ")

def printSolution(dist, parent):
	src = 0
	print("Vertex\tDistance from Source\tPath")
	for i in range(1, len(dist)):
		print(f"\n{src}-->{i}\t\t{dist[i]}\t\t", end=" ")
		printPath(parent,i)

def dijkstra(graph, src):
	row = len(graph)
	col = len(graph[0])
	dist = [float("Inf")] * row
	parent = [-1] * row
	dist[src] = 0
	queue = []

	for i in range(row):
		queue.append(i)

	while queue:
		u = minDistance(dist,queue)
		queue.remove(u)

		for i in range(col):
			if graph[u][i] and i in queue:
				if dist[u] + graph[u][i] < dist[i]:
					dist[i] = dist[u] + graph[u][i]
					parent[i] = u

	printSolution(dist,parent)

V = int(input("Enter no. of vertices: "))
g = []

for i in range(V):
	ele = list(map(int, input().split()))
	g.append(ele)

dijkstra(g, 0)