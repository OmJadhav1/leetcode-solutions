class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        set<int> s;
        unordered_map<int,int> m;
        for(int x: arr) 
            m[x]++;

        for(auto x:m){
            if(s.find(x.second) != s.end()){
                return false;
            }else{
                s.insert(x.second);
            }
        }
        return true;
    }
};