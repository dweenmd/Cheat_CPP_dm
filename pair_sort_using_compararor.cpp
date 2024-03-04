/**!
Write a C++ program to sort an array in the increasing order of the values but you also need to memorize 
the index of the values before sorting.
Input
5
4 6 2 1 7

Output
Value 1, Previous Index 3
Value 2, Previous Index 2
Value 4, Previous Index 0
Value 6, Previous Index 1
Value 7, Previous Index 4


!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> p;

    // Input elements and their indices into the vector of pairs
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        p.push_back(make_pair(i, num));
    }

    // Sort the vector of pairs based on the second element (arr[i])
    sort(p.begin(), p.end(), [](pair<int, int> &a,pair<int, int> &b)
         { return a.second < b.second; });

    // Output the sorted pairs
    for (const auto &pair : p)
    {
        cout <<"previous index: "<< pair.first << ", value: " << pair.second << endl;
    }
}