class Solution {
public:
  
    int find_nonduplicate(int start,int end,vector<int>&nums){
         if(start>=end){
            return nums[start];
         }
         int n=end-start+1;
         int mid=(start+end)/2;
    
        if(((n-1)/2)%2==0){
            if(nums[mid+1]==nums[mid]){
                return(find_nonduplicate(mid,end,nums));
            }
            else if(nums[mid-1]==nums[mid]){
                return(find_nonduplicate(start,mid,nums));
            }
            else{
            return nums[mid];}
        }
        else{
            if(nums[mid+1]==nums[mid]){
                return(find_nonduplicate(start,mid-1,nums));
            }
            else if(nums[mid-1]==nums[mid]){
                return(find_nonduplicate(mid+1,end,nums));
            }
            else{
            return nums[mid];}
        }
    }

    int singleNonDuplicate(vector<int>& nums) {
        int start=0;   
        int n=nums.size();
        int end=n-1;
        return find_nonduplicate(start,end,nums);    
    }
};