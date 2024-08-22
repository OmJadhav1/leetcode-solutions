class Solution {
public:
    bool checkValidString(string s) {
        //striver
        int min=0,max=0;

        for(char x: s){
            if(x == '('){
                min++;
                max++;
            }
            else if(x==')'){
                min--;
                max--;
            }else {
                min--;
                max++;
            }
            if(min<0)
                min=0;
            if(max<0)
                return false;
        }
        return min==0;
    }
};