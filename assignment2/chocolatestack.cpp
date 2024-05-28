#include<bits/stdc++.h>
using namespace std;
vector<int> solution (int N, vector<int> C) {
        stack<int>st;
    vector<int>toretu;
    for(int i=0;i<N;i++){
        if(C[i]!=0){
             st.push(C[i]);
        }
        if(C[i]==0){
           toretu.push_back(st.top());
           st.pop();
        }
    }
    return toretu;
}
int main(){
    
}