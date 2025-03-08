#include <bits/stdc++.h>
using namespace std;

const int Mod = 1e9 + 7;
const int N = 1e6 + 2;
int idx[N];

void printAllPairs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int y = arr[j];
            cout << x << " " << y << endl;
        }
        cout << endl;
    }
}

void mySolution()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printAllPairs(arr, n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;
    while (T--)
        mySolution();

    return 0;
}
