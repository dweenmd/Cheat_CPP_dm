/**!
* author: dween_md
* created: 2024-02-22    12:43:39
!**/
#include <bits/stdc++.h>
#define ll       long long int
using namespace std;

int main()
{  
    string s="9999999999999999999999999999999999999999999222276643789234950495238545023592375899999999999999999999999999999999999999";
    //find the sum every digit of current number 
    int sum=0;
  for(int i=0;i<s.size();i++)
  {
    int num=s[i]-'0';
    sum=sum+num;
  }
  cout<<sum;

  return 0;
}