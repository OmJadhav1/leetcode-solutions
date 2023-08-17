class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char,int> m{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
        };

        int curr=0;
        while(curr<s.length()-1){
            char temp1=s[curr];
            char temp2=s[curr+1];
            auto itr1=m.find(temp1);
            auto itr2=m.find(temp2);
            if(itr2->second>itr1->second){
                ans -=itr1->second;
                curr++;
            }else{
                ans +=itr1->second;
                curr++;
            }



        }
        if(curr<s.length()){
            char temp=s[curr];
            auto itr=m.find(temp);
            ans+=itr->second;
        }
        return ans;

    }
};