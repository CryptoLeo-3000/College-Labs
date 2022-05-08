# class Node:
# 	def __init__(self, value = None, left = None, right = None):
# 		self.left = left
# 		self.right = right
# 		self.val = value
# 	def PrintTree(self):
#     	if self.left:
#         	self.left.PrintTree()
#     	print(self.data)
#     	if self.right:
# 			self.right.PrintTree()

# def printInorder(root):
# 	if root:
# 		printInorder(root.left)
# 		print(root.val)
# 		printInorder(root.right)

# def printPostorder(root):
# 	if root:
# 		printPostorder(root.left)
# 		printPostorder(root.right)
# 		print(root.val)

# def printPreorder(root):
# 	if root:
# 		print(root.val)
# 		printPreorder(root.left)
# 		printPreorder(root.right)

# # root = Node(1)
# # root.left = Node(2)
# # root.right = Node(3)
# # root.left.left = Node(4)
# # root.left.right = Node(5)

# # print("Preorder traversal of binary tree:")
# # print(printPreorder(root))
# # print("Inorder traversal of binary tree:")
# # print(printInorder(root))
# # print("Postorder traversal of binary tree:")
# # print(printPostorder(root))

# tree_data = []
# len = 0

# while(1):
# 	print("Enter your choice: ")
# 	print("1. Enter tree data")
# 	print("2. Print Preorder, Inorder, Postorder of tree")
# 	print("3. Exit")
# 	choice = int(input())

# 	if choice == 1:
# 		tree_data.append(Node(int(input("Enter value: "))))


# print(tree_data)
class Node:

    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data

    def insert(self, data):
        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data = data

def InorderTraversal(root):
	res = []
	if root:
		res = InorderTraversal(root.left)
		res.append(root.data)
		res = res + InorderTraversal(root.right)
	return res
	
def PreorderTraversal(root):
	res = []
	if root:
		res.append(root.data)
		res = res + PreorderTraversal(root.left)
		res = res + PreorderTraversal(root.right)
	return res

def PostorderTraversal(root):
	res = []
	if root:
		res = PostorderTraversal(root.left)
		res = res + PostorderTraversal(root.right)
		res.append(root.data)
	return res


tree_len = 0
if tree_len == 0:
	root = Node(int(input("Enter value for root node: ")))

while(1):
	print("\nEnter your choice: ")
	print("1. Insert value of node")
	print("2. Print Inorder, Preorder, Postorder")
	print("3. Exit")
	choice = int(input())

	if choice == 1:
		root.insert(int(input("Enter value: ")))
		
		tree_len += 1
	elif choice == 2:
		print("Inorder: ")
		for i in InorderTraversal(root):
			print(f"{i} ", end=" ")
		print("\nPreorder: ")
		for i in PreorderTraversal(root):
			print(f"{i} ", end=" ")
		print("\nPostorder: ")
		for i in PostorderTraversal(root):
			print(f"{i} ", end=" ")
	elif choice == 3:
		break
	else:
		continue