/**!
* author: dween_md
* created: 2024-03-13    11:11:46
!**/
#include <bits/stdc++.h>

using namespace std;

int search(int arr[], int size, int s)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == s)
            return i;
    }
    return -1;
}

int main()
{

    int a;
    cout << "Enter the size of the array: ";
    cin >> a;
    int arr[a];
    cout << "Enter " << a << " elements: ";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the searching element: ";
    int x;
    cin >> x;

    int f = search(arr, a, x);
    if (f != -1)
        cout << "This element is present in the array at index " << f + 1 << '\n';
    else
        cout << "Not found😊";

    return 0;
}
