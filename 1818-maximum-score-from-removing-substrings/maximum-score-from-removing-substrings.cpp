class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int max=0,n=s.size(),count=0,min=0;
        string first="", second="";
        if(x>y){
            max=x;
            min=y;
            first = "ab";
            second = "ba";
        }
        else{
            max=y;
            min=x;
            first = "ba";
            second = "ab";
        }
        int i=0;
        while(i<n-1){
            if(s[i]==first[0] && s[i+1] == first[1]){
                count += max;
                s.erase(i, 2);
                // n=s.size();
                // cout<<s<<" ";
                // cout<<count<<" ";
                if(i>0)
                    i--;
            }else
                i++;
        }
        i=0;
        while(i<n-1){
            if(s[i]==second[0] && s[i+1] == second[1]){
                count+=min;
                s.erase(i, 2);
                // n=s.size();
                // cout<<s<<" ";
                // cout<<count<<" ";
                if(i>0)
                    i--;
            }else
                i++;
        }
        return count;
    }
};