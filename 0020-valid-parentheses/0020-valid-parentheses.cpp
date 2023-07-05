class Solution {
public:
    bool isValid(string s) {
        stack<int> ans;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] =='['){
                ans.push(s[i]);
            }else{
                if(ans.empty()){
                    return false;
                }
                else if(s[i] == ')' && ans.top() == '('){
                    ans.pop();
                    // continue;
                }else if(s[i] == ']' && ans.top() == '['){
                    ans.pop();
                    // continue;
                }else if(s[i] == '}' && ans.top() == '{'){
                    ans.pop();
                    // continue;
                }else{
                    return false;
                }
            }
        }
        if(ans.size()==0)
            return true;
        else
            return false;
    }
};