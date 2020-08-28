// The solution finds the peak element using binary search method
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int l,r,m;
      l=0;r=nums.size()-1;
      while(l<r){
          m=l+(r-l)/2;
          if(nums[m]>nums[m+1]){
              r=m;
          }else{
              l=m+1;
          }
      }
        return l;
    }
};

//Time Complexity : O(log(n))
