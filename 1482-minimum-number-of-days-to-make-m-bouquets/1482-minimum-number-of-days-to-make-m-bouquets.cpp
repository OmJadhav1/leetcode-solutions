class Solution {
public:
    bool calbou(vector<int>& bloomDay, int m, int k,int mid){
        int n=bloomDay.size();
        int count,trybou;
        trybou=count=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
                count++;
            }else{
                trybou +=count/k;
                count=0;
            }
        }
        trybou +=count/k;
        return trybou>=m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long m1,k1;
        m1=m;
        k1=k;
        int n=bloomDay.size();
        int start,end,mid;
        bool trybou;
        start=INT_MAX;
        end=INT_MIN;
        if(m1*k1 > n){
            return -1;
        }
        for(int i=0;i<n;i++){
            start=min(start,bloomDay[i]);
            end=max(end,bloomDay[i]);
        }

        while(start<end){
            mid=(start + end)/2;
            trybou=calbou(bloomDay,m,k,mid);
            if(trybou) end=mid;
            else start=mid+1;
        }
        
        
        return start;
    }
};