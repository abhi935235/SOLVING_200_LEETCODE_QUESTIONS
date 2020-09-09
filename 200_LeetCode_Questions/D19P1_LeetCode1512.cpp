class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq[101];
        int i;
        int ans=0;
        for(i=1;i<101;i++)
            freq[i]=0;
        for(int a : nums)
            freq[a]++;
        for(i=1;i<101;i++){
            if(freq[i]>1){
                if(freq[i]==2)
                    ans+=1;
                else
                    ans+=(freq[i]*(freq[i]-1))/2;
            }
        }
        return ans;
    }
};
