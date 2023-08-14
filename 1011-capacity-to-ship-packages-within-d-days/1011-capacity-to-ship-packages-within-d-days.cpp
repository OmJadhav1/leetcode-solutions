class Solution {
public:
    bool cal(vector<int>& weights, int days,int mid){
        int count=0;
        int ans=0;
        for(int x:weights){
            if(ans+x<=mid){
                ans += x;
            }else{
                count++;
                if(count> days || x>mid){
                    return false;
                }
                ans =x;
            }
        }
        if(ans<=mid) count++;
        return count<=days?1:0;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int start,end;
        start=0;
        end=accumulate(weights.begin(), weights.end(), 0);
        int  mid,ans;
        mid=ans=0;
        while(start<=end){
            mid= (start + end)/2;
            bool isok=cal(weights,days,mid);
            if(isok){
                ans=mid;
                end=mid-1;
            } 
            else start=mid+1;
        }
        return ans;
        
    }
};