#include <iostream>

using namespace std;
int max(int x, int y)
{
    return (x > y) ? x : y;
}

void knapSack(int W, int w[], int v[], int n)
{
    int i, wt;
    int K[n + 1][W + 1];
    for (i = 0; i <= n; i++) {
        for (wt = 0; wt <= W; wt++) {
            if (i == 0 || wt == 0)
            K[i][wt] = 0;
            else if (w[i - 1] <= wt)
            K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
            else
        K[i][wt] = K[i - 1][wt];
        }
    }

    int res = K[n][W];
    cout<< res << endl;
     
    wt = W;
    cout<<"Item included in knapsack: "<<endl;
    for (i = n; i > 0 && res > 0; i--)
    {
        if (res == K[i - 1][wt])
            continue;   
        else
        {
            cout<<i<<" ";
            res = res - v[i - 1];
            wt = wt - w[i - 1];
        }
    }
}

int main()
{
    cout << "Enter the number of items in a Knapsack: ";
    int n, W;
    cin >> n;
    int v[n], w[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter value of item " << i << " : ";
        cin >> v[i];
        cout << "Enter weight of item " << i << " : ";
        cin >> w[i];
    }
    cout << "Enter the capacity of knapsack: ";
    cin >> W;
    knapSack(W, w, v, n);
    return 0;
}
