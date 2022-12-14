class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(auto t:nums){
            m[t]++;
        }
        int maxnum=0;
        for(auto x:m){
            if(x.second>(n/2)){
                maxnum=x.first;
            }
        }
        return maxnum;
    }
};