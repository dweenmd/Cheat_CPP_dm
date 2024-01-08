#include <bits/stdc++.h>
using namespace std;
// topic
/*
1. push_back()-->using for input
2.pop_back()--> deleting last to first element from the vector
3.size()--> show the total element of the vector
4.back()--> show the last element of vector
5. front()--> show the first element
6. clear()--> clear whole vector
7. empty()--> declate it empty or not
8. resize()--> vector element increment or decrement.
9. sort()
10.reverse(
    11. iterator ****
)
*/
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    int size = v.size();
    cout << "output of vector:";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << "Total size of vector:" << size << endl;
    int lastElement = v.back();
    cout << "Last element:" << lastElement << endl;

    // using pop_back() function
    v.pop_back();
    size=v.size();
    cout << "after using pop_back :";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    int firstElement= v.front();
    cout << "First element:" << firstElement << endl;
    

    //resize
    v.resize(10 );
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<'\n'<<"example of foreach loop: ";
    //for each loop
    for(auto val:v)
    cout<<val<<" ";


    v.resize(size);
    //sorting accending and decending order
    sort(v.begin(),v.end());
    cout<<"\n"<<"Accending order:";
    for(auto val:v)
    cout<<val<<" ";
    //decending sort methode-01
    sort(v.rbegin(),v.rend());//it works with reverse order
    cout<<"\n"<<"Methode-01:Decending order:";
    for(auto val:v)
    cout<<val<<" ";
    //decending sort methode -02
    sort(v.begin(),v.end(),greater<int>());
    cout<<'\n'<<"Methode-02: Accending order:";
    for(auto val:v)
    cout<<val<<" ";


    // find max elememt with function
    int max= *max_element(v.begin(),v.end());
    cout<<"\nmax element:"<<max<<endl;
    int min= *min_element(v.begin(),v.end());
    cout<<"min element:"<<min<<endl;

    //partial working
    // int min=* min_element(v.begin()+1,v.begin()+5);

    //reverse the vector
    reverse(v.begin(),v.end());
    for(auto val:v)
    cout<<val<<" ";

    cout<<"this is reverse current vector."<<'\n';


}
/* 
sample input
10
6 7 4 9 8 1 2 3 5 10
*/