#include <bits/stdc++.h>
using namespace std;

const int Mod = 1e9 + 7;
const int N = 1e6 + 2;
int idx[N];

void mySolution()
{
    int marks[100];

    int n;
    cin >> n;

    // Array Input
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    // Array Output
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }
    cout << "\n";
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
