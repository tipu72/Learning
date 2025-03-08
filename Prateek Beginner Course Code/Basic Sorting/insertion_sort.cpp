#include <bits/stdc++.h>
using namespace std;

const int Mod = 1e9 + 7;
const int N = 1e6 + 2;
int idx[N];

void insertionSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int ce = arr[i];
        int pe = i - 1;
        while (pe >= 0 and arr[pe] > ce)
        {
            arr[pe + 1] = arr[pe];
            pe--;
        }

        arr[pe + 1] = ce;
    }
}

void mySolution()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);

    for (auto x : arr)
    {
        cout << x << " ";
    }
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