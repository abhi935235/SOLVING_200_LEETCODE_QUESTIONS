class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int csum=0,n=nums.size();
        int ans=0;
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++){
            csum+=nums[i];
            if(csum==k){
                ans++;
            }
            ans+=umap[csum-k];
            umap[csum]++;
        }
        return ans;
    }
};
