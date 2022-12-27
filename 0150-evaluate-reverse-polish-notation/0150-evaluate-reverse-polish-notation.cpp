class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto x:tokens){
            if(x=="+"){
                int num2=s.top();
                s.pop();
                int num1=s.top();
                s.pop();
                
                int ans=num1+num2;
                s.push(ans);
            }else if(x=="-"){
                 int num2=s.top();
                s.pop();
                int num1=s.top();
                s.pop();
                
                int ans=num1-num2;
                s.push(ans);
            }else if(x=="*"){
                 int num2=s.top();
                s.pop();
                int num1=s.top();
                s.pop();
                
                int ans=num1*num2;
                s.push(ans);
            }else if(x=="/"){
                 int num2=s.top();
                s.pop();
                int num1=s.top();
                s.pop();
                
                int ans=num1/num2;
                s.push(ans);
            }
            else{
                s.push(stoi(x));
            }
        }
        return s.top();
    }
};