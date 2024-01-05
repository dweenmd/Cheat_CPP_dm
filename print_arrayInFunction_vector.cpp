
#include <bits/stdc++.h>
using namespace std;
void printVec(const vector<int > & arr)
{
    for(int i=0;i<arr.size();++i)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int a, b;
    cin >> a;
    vector<int> arr1;
    for (int i = 0; i < a; i++)
    {
        int element;
        cin >> element;
        arr1.push_back(element);
    }
    
printVec(arr1);
}