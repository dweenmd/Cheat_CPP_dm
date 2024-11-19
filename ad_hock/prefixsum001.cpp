#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    cout<<"Input the size of array and the elements: ";
    int n;cin>>n;
    vector<int>arr(n);
    vector<int>prefix(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
        prefix[0]=arr[0];
        if(i>0){
            prefix[i]=prefix[i-1]+arr[i];
        }
    }
    cout<<"Ask for queries:"<<"\n";
    int q;cin>>q;
    
    while(q--){
        cout<<"input left and right index for sum:";
        int l,r;
        cin>>l>>r;
        if(l==0)cout<<prefix[r]<<"\n";
        else cout<<prefix[r]-prefix[l]<<"\n";

    }
    
}

