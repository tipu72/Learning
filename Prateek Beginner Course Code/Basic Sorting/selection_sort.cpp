#include <bits/stdc++.h>
using namespace std;

const int Mod = 1e9 + 7;
const int N = 1e6 + 2;
int idx[N];

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int ce = arr[i];
        int mine = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mine])
                mine = j;
        }

        swap(arr[mine], arr[i]);
    }
}

void mySolution()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);

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