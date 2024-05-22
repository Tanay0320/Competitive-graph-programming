int NthRoot(int n, int m) {
    int s=1,e=m;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
      mid=(s+e)/2;
      if(pow(mid,n)>m){
        e=mid-1;
      }
      else if(pow(mid,n)<m){
        s=mid+1;
      }
     else if(pow(mid,n)==m){
        return mid;
      }
    }
    return ans;
}