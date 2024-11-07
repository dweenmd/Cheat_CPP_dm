#include <bits/stdc++.h>
#define ll       long long int
#define asc(v)   sort(v.begin(), v.end())            //vectors,pairs,tuples,string
#define dsc(v)   sort(v.begin(), v.end(), greater<int>())
#define vwv      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

using namespace std;

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll n){ll l=1;ll r=n;while(l<=r){ll mid=l+(r-l)/2;if(mid*mid==n)return true; if(mid*mid>n){r=mid-1;} else l=mid+1;}return false;}
// Maths
ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll factorial(ll n) {ll factorial = 1;for (ll i = 2; i <= n; i++)factorial = factorial * i;return factorial;}
ll nCr(ll n, ll r) {return factorial(n) / (factorial(r) * factorial(n - r));}
ll countDigit(ll n){ll count = 0;while (n != 0){n = n / 10; ++count;}return count;}
ll removeZero(ll n){ll q=0,r;while(n > 0){r = n % 10;n = n / 10;if(r!=0){q = q*10 + r;}}n = q;q= 0;while(n>0){r = n % 10;n = n / 10;q= q*10 + r;}return q;}
ll reverse(ll n) {ll res=0; while(n){res=res*10+n%10; n=n/10;} return res;}

int main()
{  
  
    
  return 0;
}