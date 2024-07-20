class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        if(n1 != n2)
            return false;
        set<int> s1,s2;
        for(char x: word1)
            s1.insert(x);
        for(char x: word2)
            s2.insert(x);

        if(s1!= s2)
            return false;

        unordered_map<int,int> m1,m2;
        for(char x: word1)
            m1[x]++;
        for(char x: word2)
            m2[x]++;
        vector<int> list1,list2;
        for(auto x: m1){
            list1.push_back(x.second);
        }
        for(auto x: m2){
            list2.push_back(x.second);
        }
        sort(list1.begin(),list1.end());
        sort(list2.begin(),list2.end());
        if(list1 != list2)
            return false;
        
        return true;
    }
};