#include <bits/stdc++.h>
using namespace std;

const int Mod = 1e9 + 7;
const int N = 1e6 + 2;
int idx[N];

bool cmp(int a, int b)
{
    return a > b;
}

void mySolution()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr + n, cmp);
    // sort(arr, arr + n, greater<int>());
    //  reverse(arr, arr + n);

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