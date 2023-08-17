class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string sub="";
        bool flag=true;
        int count=INT_MIN;
        string ans="";
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sub.push_back(s[j]);
                // cout<<sub<<" ";
                int start=0;
                int end=sub.size()-1;
                flag=true;
                while(start<=end){
                    if(sub[start] != sub[end]){
                        flag=false;
                        break;
                    }
                    start++;
                    end--;
                }
                if(flag){
                    int size=sub.size();
                    if(size > count){
                        ans =sub;
                        count=size;
                    }
                    // cout<<sub<<" ";
                }
            }
            sub="";
        }
        return ans;
    }
};