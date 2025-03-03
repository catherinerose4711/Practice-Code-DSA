class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        bool freq[256]={false};
        string result;
        
        for (int i=0;i<s.length();i++){
        if(!freq[s[i]]){
            freq[s[i]]=true;
            result += s[i];
        }
    }
    return result;
    }
};
