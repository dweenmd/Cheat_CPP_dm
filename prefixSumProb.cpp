/*
>> Problem - cs->DS(7-1)1:05-2:0

You are given an array of n positive integers. The next line will contain a q.
Then the next q lines contains q queries, in each query you will be given
two values l and r(The index number, where l<r).
You need to tell the sum between l and r in each query.

Sample Input -
5
2 4 1 3 9
4
1 3
2 4
2 5
1 5
Sample Output -
7
8
17
19
*/

//>> Solution -

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> pref(n + 1);
    for (int i = 1; i <= n; i++)
        pref[i] = (pref[i - 1] + v[i]);

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << '\n';
    }

    return 0;
}