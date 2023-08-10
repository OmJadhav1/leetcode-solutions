class Solution {
public:
    int maxban(vector<int>& piles,int n){
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,piles[i]);
        }
        return ans;
    }
    
    long long hours(vector<int>& piles,int mid,int n){
        long long count=0;
        for(int i=0;i<n;i++){
            count += piles[i]/mid;
            if(piles[i]%mid != 0) count++;
        }
        return count;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        long long time,mid;
        int start=1;
        int end=maxban(piles,n);
        mid=time= 0;
        while(start<=end){
            mid=(start+end) / 2;
            time=hours(piles,mid,n);
            // if(time==h) return mid;
             if(time > h) start= mid+1;
            else if(time <= h) end= mid-1;  
            
        }
        return start;
        
    }
};