class Solution {
public:
    int maxDepth(string s) {
        stack<char> stack;
        int count=-1, temp =0 ;
        int size = s.size();
        for(int i=0; i<size; i++){
            if(s[i]=='(') stack.push(s[i]);
            if(s[i]==')') stack.pop();
            temp = stack.size();
            if(temp>count) count=temp;
        }
        return count;
    }
};