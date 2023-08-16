class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if((static_cast<int>(s[i]) >= 65 && static_cast<int>(s[i]) <= 90)){
                ans.push_back(s[i]+32);
            }
            if((static_cast<int>(s[i]) >= 97 && static_cast<int>(s[i]) <= 122) || (static_cast<int>(s[i]) >= 48 && static_cast<int>(s[i]) <= 57)){
                ans.push_back(s[i]); 
            }
        }
        int start=0;
        int end=ans.size()-1;
        cout<<ans;
        while(start<end){
            if(ans[start] != ans[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};