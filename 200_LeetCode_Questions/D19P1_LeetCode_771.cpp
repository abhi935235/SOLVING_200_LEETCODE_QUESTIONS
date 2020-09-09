class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> m;
        int ans=0;
        for(int i=0;S[i]!='\0';i++){
            m[(int)S[i]]++;
        }
        unordered_map<char, int>::iterator it ;
        for(int i=0;J[i]!='\0';i++){
            it=m.find(J[i]);
            if(it!=m.end()){
                ans+=it->second;
            }
        }
        return ans;
    }
};
