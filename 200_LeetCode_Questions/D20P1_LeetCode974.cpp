class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        unordered_map<int,int> mp;
        int n = A.size();
        mp[0]++;
        int csum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            csum+=A[i];
            int r = csum%K;
            if(r<0)
                r+=K;
            ans+=mp[r];
            mp[r]++;
        }
        return ans;
    }
};
