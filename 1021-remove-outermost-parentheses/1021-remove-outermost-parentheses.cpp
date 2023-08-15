class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        int count=-1;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i] == '(' && count== -1){
                count=0;
                continue;
            }else if(s[i] == '(' && count>= 0){
                ans.push_back('(');
                count++;
            }else if(s[i] == ')' && count>0){
                ans.push_back(')');
                count--;
            }else {
                count=-1;
                continue;
            }
        }
        return ans;
    }
};