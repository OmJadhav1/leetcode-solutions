class Solution {
public:
    string reverseWords(string s) {
        string subans = "", ans = "";
        reverse(s.begin(),s.end());
        for (int i=0;i<s.size();i++) {
            if (s[i] == ' ' && subans.empty()) {
                continue;
            }
            if (s[i] == ' ' && !subans.empty()) {
                reverse(subans.begin(), subans.end());
                ans += subans;
                ans += ' ';
                subans = "";
            }else 
                subans += s[i];
        }
        if (!subans.empty()) {
            reverse(subans.begin(), subans.end());
            ans += subans;
            ans += " ";
            subans = "";
        }
        return ans.substr(0, ans.size()-1);
    }
};