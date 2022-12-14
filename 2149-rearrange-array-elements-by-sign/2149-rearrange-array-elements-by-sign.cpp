class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos ;
        vector<int> neg;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans.push_back(pos[i/2]);
            }else{
                ans.push_back(neg[i/2]);
            }
        }
        
        return ans;
    }
};