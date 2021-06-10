class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        if(pushed.size() != popped.size())
            return false;
        stack<int> s;
        int j = 0;
        for(int i = 0; i < pushed.size(); i++){
            s.push(pushed[i]);
            while(!s.empty() && s.top() == popped[j]){
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};