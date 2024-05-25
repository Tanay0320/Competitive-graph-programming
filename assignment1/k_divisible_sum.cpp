#include<bits/stdc++.h>
using namespace std;

int main() {
   long long t,n,k,ceil_fac;
   cin>>t;
   for(int i=0;i<t;i++){
      cin>>n>>k;
    int ceil_fac=(n+k-1)/k;
    k*=ceil_fac;
     cout<<(n+k-1)/n<<endl;  
   }
}