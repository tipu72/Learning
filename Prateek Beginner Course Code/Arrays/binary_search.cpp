#include <bits/stdc++.h>
using namespace std;

const int Mod = 1e9 + 7;
const int N = 1e6 + 2;
int idx[N];

int binary_search(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (k == arr[mid])
            return mid;
        else if (k > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }

    return -1;
}

void mySolution()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int k;
    cin >> k;

    int idx = binary_search(arr, n, k);

    if (idx != -1)
        cout << k << " found at index: " << idx;
    else
        cout << "not found";
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
