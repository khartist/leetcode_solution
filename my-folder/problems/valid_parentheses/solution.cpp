class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()==0) return false;
    for(size_t i = 0; i<s.size(); i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]);
        else if(st.empty()) return false;
        else{
            if(s[i]==')'&&(st.top()!='('||st.empty())) return false; 
            else if(s[i]==')'&&st.top()=='(') st.pop();
            if(s[i]==']'&&(st.top()!='['||st.empty())) return false; 
            else if(s[i]==']'&&st.top()=='[') st.pop();
            if(s[i]=='}'&&(st.top()!='{'||st.empty())) return false;
            else if(s[i]=='}'&&st.top()=='{') st.pop();
        }
        if(st.empty()) cout<<1<<" ";
        else cout<<st.top()<<" ";
    }
    cout<<endl;
    if(!st.empty()) return false;
    return true;
    }
};