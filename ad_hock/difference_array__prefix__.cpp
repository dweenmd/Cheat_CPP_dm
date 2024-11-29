#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n + 1];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int dif[n + 2] = {0}; // Declare a difference array initialized to 0

    int q;
    cin >> q;
    while (q--)
    {
        int l, r, v;
        cin >> l >> r >> v; // Input range [l, r] (1-based) and value v
        dif[l] += v;        // Increment the {difference array} at position l by v
        dif[r + 1] -= v;    // Decrement the position r+1 by v to mark the end of the addition
    }

    // Compute the prefix sum of the difference array to apply the range update
    for (int i = 1; i < n; i++)
        dif[i] += dif[i - 1];

    // Update the original array using the modified difference array
    for (int i = 0; i < n; i++)
        ar[i] += dif[i];

    // Print
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;

    return 0;
}
/*
input:
7
2 3 4 5 6 7 8
3                     query
1 5 1                 left , right & value of (l, r range)
0 3 2
4 6 3

output:
4 6 7 8 10 11 11
*/