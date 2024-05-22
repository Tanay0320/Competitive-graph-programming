#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,q,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k>>q;
      long long a[k+1],b[k+1];
        a[0]=0;b[0]=0;
        for(int j=1;j<=k;j++){
            cin>>a[j];
        }
        for(int l=1;l<=k;l++){
             cin>>b[l];
        }
        for(int m=0;m<q;m++){
            cin>>d;
             int s=0; int e=k; 
            while(s<=e){
             int mid=(s+e)/2;
               if(a[mid]>d){
                e=mid-1;
               } 
               if(a[mid]<d){
                s=mid+1;
               }
            }
            if(a[e]==d){
                cout<<b[e]<<' ';
                continue;
            }
            else
            cout<<b[e]+(d-a[e])*(b[e+1]-b[e])/(a[e+1]-a[e])<<' ';
        }
    cout<<endl;
    }
}