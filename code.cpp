#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
/* 
When I wrote this code ,
only Allah and I knew what I did.
   
Now... only Allah knows
*/

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<bool> prime(n+1,true);
    for(int i=2;i<=sqrt(n);i++) {   
        if(prime[i]) {
            for(int j=i+i;j<=n;j+=i) {    //   total complexity O(nloglogn)
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++) {
        if(prime[i]) cout<<i<<" ";
    }
    return 0;
}
