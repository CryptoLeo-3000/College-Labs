import collections

class Graph:
    def __init__(self):
        self.graph = collections.defaultdict(list)

        global n
        n = int(input("Enter no. of edges in graph: "))

        for i in range(n):
            print(f"Connection {i+1}")
            index = int(input("Enter 1st node: "))
            value = int(input("Enter 2nd node: "))
            print("\n")
            
            self.graph[index].append(value)
        
        print(self.graph)
    
    def BreadthSearch(self, start):
        visited = [0] * n

        queue = []
        print_sequence = []
        queue.append(start)
        visited[start] = 1

        while queue:
            start = queue.pop(0)
            print_sequence.append(start)

            for i in self.graph[start]:
                if visited[i] == 0:
                    queue.append(i)
                    visited[i] = 1
        
        for i in print_sequence:
            print(i, end=" ")

g = Graph()
g.BreadthSearch(int(input("Enter starting vertex: ")))