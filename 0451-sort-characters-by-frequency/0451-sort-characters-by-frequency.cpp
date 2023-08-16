class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(char x: s){
            m[x]++;
        }
        int count=INT_MIN;
        for(auto x: m){
            count=max(count,x.second);
        }
        string ans="";
        for(int i=count;i>0;i--){
            for(auto x: m){
                if(x.second == i){
                    int loop=i;
                    while(loop--){
                        ans.push_back(x.first);
                    }
                }
            }
        }
        
        // for(auto x: m){
        //     int i=2;
        //         if(x.second == i){
        //             while(i--){
        //                 ans.push_back(x.first);
        //             }
        //         }
        //     }
        
        return ans;
    }
};