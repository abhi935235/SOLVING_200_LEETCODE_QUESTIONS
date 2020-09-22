class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> s;
        int ans=0;
        for(auto ch:S){
            if(ch=='(')
                s.push(ch);
            else{
                if(!s.empty())
                    s.pop();
                else{
                    ans++;  //for case (())))
                }
            }
        }
        return ans+s.size();
    }
};
