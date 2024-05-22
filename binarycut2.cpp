#include<bits/stdc++.h>
using namespace std;

void noofcuts(string str){
    int n=str.length();int zerocount=0,cutcount=1;int i;
    for( i=1;i<n-1;i++){{
        if(str[i]=='1' && str[i+1]=='0'){
         zerocount++;       
        }       
        if (zerocount>0) {
            if(str[i]!=str[i+1])
            cutcount++;     
        }
        }
     }
        cout<<cutcount<<endl;   
     }   
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str;
        cin>>str;   
      noofcuts(str);
    }
    return 0;
}
