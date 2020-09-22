class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> umap;
     int n = nums.size();
        for(int i=0;i<n;i++){
            int d = target - nums[i];
            if(umap.count(d)){
                return{i,umap[d]};
            }
            umap[nums[i]]=i;
        }
        return{0,0};
    }
};
