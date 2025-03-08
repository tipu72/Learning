#include <bits/stdc++.h>
using namespace std;

const int Mod = 1e9 + 7;
const int N = 1e6 + 2;
int idx[N];
// kadane's approch
int subArraySum(int arr[], int n)
{
    int cs = 0;
    int msum = 0;
    for (int i = 0; i < n; i++)
    {
        cs += arr[i];
        if (cs < 0)
            cs = 0;
        msum = max(msum, cs);
    }
    return msum;
}

void mySolution()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << subArraySum(arr, n);
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