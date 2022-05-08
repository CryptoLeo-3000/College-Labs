from collections import defaultdict
import os

def find(parent, i):
    if parent[i] == i:
        return i
    return find(parent, parent[i])

def union(parent, rank, x, y):
    xroot = find(parent, x)
    yroot = find(parent, y)

    if rank[xroot] < rank[yroot]:
        parent[xroot] = yroot
    elif rank[xroot] > rank[yroot]:
        parent[yroot] = xroot
    else:
        parent[yroot] = xroot
        rank[xroot] += 1

def Kruskal(graph):
    result = []
    i = 0
    e = 0
    graph = sorted(graph, key=lambda item: item[2])
    parent = []
    rank = []
    minimumCost = 0

    for node in range(V):
        parent.append(node)
        rank.append(0)

    while e < V - 1:
        u, v, w = graph[i]
        i = i + 1
        x = find(parent, u)
        y = find(parent, v)

        if x != y:
            e = e + 1
            result.append([u, v, w])
            union(parent, rank, x, y)
    
    print("Path\tWeight")
    for u, v, weight in result:
        minimumCost += weight
        print(f"{u}-->{v}\t   {weight}")
    print(f"Minimum Spanning Tree: {minimumCost}")

V = int(input("Enter the no. of vertices: "))
edge = int(input("Enter the no. of edges: "))
graph = []
os.system("cls")

for i in range(edge):
    start = int(input("Enter first node: "))
    end = int(input("Enter second node: "))
    wt = int(input("Enter weight of nodes: "))

    os.system("cls")
    graph.append([start, end, wt])

os.system("cls")

print(f"No. of vertices: {V}")
print(f"No. of edges: {edge}\n")
Kruskal(graph)