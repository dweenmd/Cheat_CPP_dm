/*
>> Problem - cs->DS(8-1)1:17-2:0
>> Problem -
You are given an array of n positive integers. The next line will contain q queries, in each
query you will be given a type and an integer k.If the type is 1 then perform lower bound,
if the type is 2 then perform upper bound.If the element is not found in any query print -1

>> lower bound = if k present then return k otherwise return immediate greater element of k
>> upper bound = if k present or not return immediate greater element of k

Sample Input - 
7
2 3 19 6 7 5 17
4
1 19
1 15
2 3
2 8
Sample Output - 
6 -> 19
5 -> 17
2 -> 5
5 -> 17

>> Solution -
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n;i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--)
    {
        int type, k;
        cin >> type >> k;
        if (type == 1)
        {
            auto it = lower_bound(v.begin(), v.end(), k);
            if (it != v.end())
            {
                int idx = it - v.begin(), value = *it;
                cout << idx << " -> " << value << '\n';
            }
            else
                cout << -1 << '\n';
        }
        else
        {
            auto it = upper_bound(v.begin(), v.end(), k);
            if (it != v.end())
            {
                int idx = it - v.begin(), value = *it;
                cout << idx << " -> " << value << '\n';
            }
            else
                cout << -1 << '\n';
        }
    }

    return 0;
}