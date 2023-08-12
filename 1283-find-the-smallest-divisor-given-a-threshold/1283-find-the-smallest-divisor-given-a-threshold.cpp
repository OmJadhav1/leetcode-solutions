class Solution {
public:
    int cal(vector<int>& nums, int mid){
        int ans=0;
        for(int x:nums){
            float num1=x;
            ans += ceil(num1/mid);
        }
        return ans;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start,end,ans,num;
        start=1;
        end=INT_MIN;
        for(int x: nums){
            // start= min(start,x);
            end=max(end,x);
        }
        int mid=0;
        while(start<=end){
            mid=(start+end)/2;
            num=cal(nums,mid);
            if(num<=threshold){
                ans=mid;
                if(start==end){
                    break;
                }
                end=mid;
                
            } 
            else start=mid+1;
        }
        return start;
        
    }
};