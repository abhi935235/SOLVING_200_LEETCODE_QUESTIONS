class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int i,j,count;
        for(i=0;i<nums.size();i++){
            count=0;
            for(j=0;j<nums.size();j++){
                if(nums[i]>nums[j])
                    count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
