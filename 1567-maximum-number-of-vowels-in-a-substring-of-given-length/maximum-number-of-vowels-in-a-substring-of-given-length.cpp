class Solution {
public:

bool isvowel(char a){
    if(a== 'a' || a=='e' || a=='i' || a=='o' || a=='u')
        return true;
    else
        return false;
}
    int maxVowels(string s, int k) {
        int n=s.size();
        int i=0,j=0;
        int ans=0,count=0;
        while(j<n){
            if(isvowel( s[j]))
                count++;
            if(j-i+1 == k){
                ans=max(ans,count);
                if(isvowel( s[i]))
                    count--;
                i++;
            }
            j++;
        }
        return ans;
    }
};