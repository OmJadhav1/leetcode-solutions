class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0,twenty=0;

        for(int x : bills){
            if(x==5){
                five++;
            }else if(x==10){
                if(five>=0){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }else if(x==20){
                if(five>=1 && ten>=1){
                    twenty++;
                    five--;
                    ten--;
                }else if(five>=3){
                    five-=3;
                    twenty++;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};