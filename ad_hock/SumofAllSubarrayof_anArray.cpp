//https://www.youtube.com/watch?v=qsPxihBZ5Gk&list=PL0G2Ga9ALv6lDDaPDv6OIw1ImHBFVV1i-&index=8

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=1;i<=n;i++) cin>>arr[i];

    //sum of all subarray
    ll sum=0;
    for(int i=1;i<=n;i++){
        sum+=arr[i]*(i*(n-i+1));
    }
    cout<<sum<<"\n"z;

}

/*
4               
3 2 4 1  
output: 3+3+2......         
52      
*/