class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        string ans= "";
        int count=-1;
        for(int i=n-1;i>=0;i--){
            if(int(num[i]) %2 == 1){
                count=i;
                break;
            }
        }
        for(int i=0;i<=count;i++){
            ans.push_back(num[i]);
        }
        return ans;
    }
};