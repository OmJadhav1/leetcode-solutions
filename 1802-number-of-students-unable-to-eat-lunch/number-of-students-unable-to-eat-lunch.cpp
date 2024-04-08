class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        stack<int> s;
        deque<int> q;
        for(int i=n-1;i>=0;i--){
            s.push(sandwiches[i]);
        }
        for(int x:students)
            q.push_back(x);
        int count=0;
        while(!s.empty()){
            if(q.size()<count)
                break;
            
            if(s.top() != q.front()){
                int ele=q.front();
                q.pop_front();
                q.push_back(ele);
                count++;
            }else{
                count=0;
                s.pop();
                q.pop_front();
            }
        }

        return s.size();
    }
};