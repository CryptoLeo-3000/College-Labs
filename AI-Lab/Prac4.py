from collections import defaultdict
class Graph:
	def __init__(self):
		self.graph = defaultdict(list)

	def addEdge(self, u, v):
		self.graph[u].append(v)

	def DFSUtil(self, v, visited):
		visited.add(v)
		print(v)
		for neighbour in self.graph[v]:
			if neighbour not in visited:
				self.DFSUtil(neighbour, visited)

	def DFS(self):
		visited = set()
		for vertex in self.graph:
			if vertex not in visited:
				self.DFSUtil(vertex, visited)

g = Graph()

for i in range(int(input("Enter no. of edges: "))):
    g.addEdge(int(input("Enter 1st node: ")), int(input("Enter 2nd node: ")))
    print("\n")

g.DFS()