class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(string x: details){
            if(x[11] =='6' && x[12] >'0'){
                count++;
            }else if(x[11]>'6'){
                count++;
            }
        }
        return count;
    }
};