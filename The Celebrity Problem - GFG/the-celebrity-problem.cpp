//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    bool knows(vector<vector<int> >& M,int first,int second, int n){
        if(M[first][second] == 1){
            return true;
        }else{
            return false;
        }
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // int n= M.size();
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        
        while(s.size() != 1){
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            
            if(knows(M,first,second, n)){
                s.push(second);
            }else{
                s.push(first);
            }
        }
        int ans= s.top();
        int zerocount,onecount;
        zerocount=onecount=0;
        for(int i=0;i<n;i++){
            if(M[ans][i] == 0){
                zerocount++;
            }
        }
        if(zerocount != n){
            return -1;
        }
        for(int i=0;i<n;i++){
            if(M[i][ans] == 1){
                onecount++;
            }
        }
        if(onecount != n-1){
            return -1;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends