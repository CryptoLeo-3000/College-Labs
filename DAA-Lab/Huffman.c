#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_TREE_HT 100
char *alphabets;
int *freq, n;

struct MinHeapNode
{
	char data;
	unsigned freq;
	struct MinHeapNode *left, *right;
};

struct MinHeap
{
	unsigned size, capacity;
	struct MinHeapNode** array;
};

struct MinHeapNode* newNode(char data, unsigned freq)
{
	struct MinHeapNode* temp = (struct MinHeapNode*)malloc(sizeof(struct MinHeapNode));

	temp->left = temp->right = NULL;
	temp->data = data;
	temp->freq = freq;

	return temp;
}

struct MinHeap* createMinHeap(unsigned capacity)
{
	struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap));

	minHeap->size = 0;
	minHeap->capacity = capacity;
	minHeap->array = (struct MinHeapNode**)malloc(minHeap->capacity * sizeof(struct MinHeapNode*));

	return minHeap;
}

void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b)
{
	struct MinHeapNode* t = *a;
	*a = *b;
	*b = t;
}

void minHeapify(struct MinHeap* minHeap, int idx)
{
	int smallest = idx;
	int left = 2 * idx + 1;
	int right = 2 * idx + 2;

	if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq)
		smallest = left;

	if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq)
		smallest = right;

	if (smallest != idx)
    {
		swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);
		minHeapify(minHeap, smallest);
	}
}

int isSizeOne(struct MinHeap* minHeap)
{
	return (minHeap->size == 1);
}

struct MinHeapNode* extractMin(struct MinHeap* minHeap)
{
	struct MinHeapNode* temp = minHeap->array[0];
	
	minHeap->array[0] = minHeap->array[minHeap->size - 1];
	--minHeap->size;
	minHeapify(minHeap, 0);

	return temp;
}

void insertMinHeap(struct MinHeap* minHeap, struct MinHeapNode* minHeapNode)
{
	++minHeap->size;
	int i = minHeap->size - 1;

	while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq)
    {
        minHeap->array[i] = minHeap->array[(i - 1) / 2];
		i = (i - 1) / 2;
	}

	minHeap->array[i] = minHeapNode;
}

void buildMinHeap(struct MinHeap* minHeap)
{
	int n = minHeap->size - 1;

	for(int i = (n - 1) / 2; i >= 0; --i)
        minHeapify(minHeap, i);
}

void printArr(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d", arr[i]);

	printf("\n");
}

int isLeaf(struct MinHeapNode* root)
{
	return !(root->left) && !(root->right);
}

struct MinHeap* createAndBuildMinHeap(char data[], int freq[], int n)
{
	struct MinHeap* minHeap = createMinHeap(n);

	for (int i = 0; i < n; ++i)
		minHeap->array[i] = newNode(data[i], freq[i]);

	minHeap->size = n;
	buildMinHeap(minHeap);

	return minHeap;
}

struct MinHeapNode* buildHuffmanTree(char data[], int freq[], int n)
{
	struct MinHeapNode *left, *right, *top;
	struct MinHeap* minHeap = createAndBuildMinHeap(data, freq, n);

	while (!isSizeOne(minHeap))
    {
		left = extractMin(minHeap);
		right = extractMin(minHeap);
		top = newNode('$', left->freq + right->freq);
		top->left = left;
		top->right = right;

		insertMinHeap(minHeap, top);
	}

	return extractMin(minHeap);
}

void printCodes(struct MinHeapNode* root, int arr[], int top)
{
	if (root->left)
    {
		arr[top] = 0;
		printCodes(root->left, arr, top + 1);
	}

	if (root->right)
    {
		arr[top] = 1;
		printCodes(root->right, arr, top + 1);
	}

	if (isLeaf(root))
    {
		printf("%c: ", root->data);
		printArr(arr, top);
	}
}

void HuffmanCodes(char data[], int freq[], int n)
{
    struct MinHeapNode* root = buildHuffmanTree(data, freq, n);
	int arr[MAX_TREE_HT], top = 0;

	printCodes(root, arr, top);
}

int main()
{
	int val;
    alphabets = (char*)malloc(n * sizeof(char));
    freq = (int*)malloc(n * sizeof(int));

    printf("Enter no. of values:");
    scanf("%d", &n);

    for(int i = 0; i<n; i++)
    {
        printf("Enter character %d: ", i+1);
        scanf("%s", &val);
        alphabets[i] = val;

        printf("Enter frequency of %c: ", alphabets[i]);
        scanf("%d", &val);
        freq[i] = val;
    }

	HuffmanCodes(alphabets, freq, n);

	return 0;
}