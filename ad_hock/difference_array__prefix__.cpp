#include<bits/stdc++.h> // Including all standard libraries
using namespace std;

int main()
{
    int n; 
    cin >> n; // Input the size of the array
    int ar[n+1]; // Declare the array to store `n` elements
    for(int i = 0; i < n; i++) cin >> ar[i]; // Input the elements of the array

    int dif[n+2] = {0}; // Declare a difference array initialized to 0

    int q;
    cin >> q; // Input the number of queries
    while(q--) // Loop over each query
    {
        int l, r, v;
        cin >> l >> r >> v; // Input range [l, r] (1-based) and value v
        dif[l] += v; // Increment the difference array at position `l` by `v`
        dif[r+1] -= v; // Decrement the position `r+1` by `v` to mark the end of the addition
    }

    // Compute the prefix sum of the difference array to apply the range update
    for(int i = 1; i < n; i++) dif[i] += dif[i-1];

    // Update the original array using the modified difference array
    for(int i = 0; i < n; i++) ar[i] += dif[i];

    // Print the updated array
    for(int i = 0; i < n; i++) cout << ar[i] << " ";
    cout << endl;

    return 0; // End of program
}
