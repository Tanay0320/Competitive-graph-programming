#include<bits/stdc++.h>
using namespace std;

void printsumoftree(long long int i,long long int &sum ){
    sum=sum+(i+1);    
    if(i==0){
        return;
    }                                           
     printsumoftree((i-1)/2,sum);

}

int main(){
    int N;
    long long int x;
    cin>>N;
    vector<long long int>arr(N);
    for(int i=0;i<N;i++){
        cin>>x;
        arr[i]=x;
    }
    for(int i=0;i<N;i++){
    long long int sum=0;
    printsumoftree(arr[i]-1,sum);
    cout<<sum<<endl;
    }
    return 0;
}