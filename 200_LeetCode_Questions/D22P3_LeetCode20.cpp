class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        int ans=0;
        for(char c:s){
            switch(c){
                case '(':
                case '[':
                case '{':
                        S.push(c);
                        ans++;
                        break;
                case ')' : if(!S.empty()&&S.top()!='(')
                            return false;
                            break;
                case ']' : if(!S.empty()&&S.top()!='[')
                            return false;
                            break;
                case '}' : if(!S.empty()&&S.top()!='{')
                            return false;
                            break;
            }
            if(c==')'||c=='}'||c==']'){
            if(!S.empty()){
                S.pop();
                ans--;
                }else{
                    ans++;
                }
            }
        }
        ans+=S.size();
        if(ans==0){
            return true;
        }else{
            return false;
        }
    }
};
