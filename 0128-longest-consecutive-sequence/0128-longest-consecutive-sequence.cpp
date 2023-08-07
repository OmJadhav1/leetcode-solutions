class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count,ans;
        count=ans=0;
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int ssize=s.size();
        vector<int> ansvec(s.begin(), s.end());
        
        
        for(int i=1;i<ssize;i++){
            if(ansvec[i]-ansvec[i-1] == 1){
                count++;
                ans=max(count+1,ans);
            }else{
                count=0;
            }
        }
        if(ssize==0){
            ans=0;
        }else if(ans==0){
            ans=1;
        }
        
        return ans;
    }
};