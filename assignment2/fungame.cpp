#include<bits/stdc++.h>
using namespace std;

vector<int> funGame (vector<int> arr) {
   stack<int>stA,stB;
   vector<int>output_list;

   for(int i=0;i<arr.size();i++){
    stB.push(arr[i]);
   }
   for(int i=arr.size()-1;i>=0;i--){
    stA.push(arr[i]);
   }
   while(!stA.empty() && !stB.empty()){
    if(stA.top()>stB.top()){
       output_list.push_back(1);
       stB.pop();
    }
    else if(stB.top()>stA.top()){
       output_list.push_back(2);
       stA.pop();
    }
    else{
    output_list.push_back(0);
    stA.pop();
    stB.pop();
    }
   }

   return output_list;
}

int main(){
    
}

