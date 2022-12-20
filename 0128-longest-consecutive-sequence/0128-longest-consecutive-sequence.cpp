class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int a=nums.size();
        int ans=0,num=0;
        set<int> s;
        for(int i=0;i<a;i++){
            s.insert(nums[i]);
        }
        int ssize=s.size();
        vector<int> arr(s.begin(), s.end());
        
        int n=arr.size();
        if(n==1 || n==0){
            return n;
        }
        
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]-1){
                num++;
            }else{
                num++;
                ans=max(ans,num);
                num=0;
            }
        }        
        if(arr[n-2]==arr[n-1]-1){
            num++;
        }
        ans=max(ans,num);
        return ans;
    }
};