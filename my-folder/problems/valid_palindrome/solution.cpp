class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==1) return true;
        string result = "";
    //    cout<<s.size()<<" ";
        for(size_t i = 0; i<s.size(); i++){
            //s[i] = to_lower(s[i]);
            if(s[i]>='A'&&s[i]<='Z') result += char(s[i]+32);
            if((s[i]>='a'&&s[i]<='z')) result += s[i];
            if(s[i]>='0'&&s[i]<='9') result += s[i];
        }
    //    cout<<result<<" ";
        size_t n = result.size();
        if(n==0) return true;
    //    cout<<n<<'\n';
        for(size_t i = 0; i<=n/2; i++){
    //        cout<<result[i]<<" ";
            if(result[i]!=result[n-i-1]) return false;
          //  else return false;
        }
        return true;
    }
};