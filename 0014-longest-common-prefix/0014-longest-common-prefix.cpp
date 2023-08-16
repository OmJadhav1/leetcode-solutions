class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int loop=INT_MAX;
        for(int i=0;i<n;i++){
            int size=strs[i].size();
            loop = min(loop, size);
        }
        bool flag=false;
        string ans="";
        for(int i=0;i<loop;i++){
            char check = strs[0][i];
            for(int j=0;j<n;j++){
                if(check != strs[j][i]){
                    flag= true;
                }
            }
            if(!flag){
                ans.push_back(check);
            }
        }
        return ans;
    }
};