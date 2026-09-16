class Solution {
public:
    bool isPalindrome(string s) {
       // queue<string> q;
       vector<char> v;

        for(int i=0; i<s.size(); i++){
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                
                    char ch = tolower(s[i]);
                    v.push_back(ch);
                
                
            }
        }
        int st = 0;
        int e = v.size()-1;

        while(st<=e){
           if(v[st] != v[e]){
            return false;
           }
           st++;
           e--;
        }

        return true;
    }
};