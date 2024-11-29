//https://www.youtube.com/watch?v=SeEpv8uh8gE&list=PL0G2Ga9ALv6lDDaPDv6OIw1ImHBFVV1i-&index=9
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    while(next_permutation(s.begin(),s.end())){
        cout<<s<<"\n";
    }
}

