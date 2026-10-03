class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> ma;
        int ans = 0;
        int n = s.length();
        ma['I'] = 1;
        ma['V'] = 5;
        ma['X'] = 10;
        ma['L'] = 50;
        ma['C'] = 100;
        ma['D'] = 500;
        ma['M'] = 1000;

        for(int i=0; i<s.length(); i++){
            if(i < n-1 && s[i] == 'I' && s[i+1] == 'V'){
                ans += 4;
                i++;
            }else if(i < n-1 && s[i] == 'I' && s[i+1] == 'X'){
                ans += 9;
                i++;
            }else if(i < n-1 && s[i] == 'X' && s[i+1] == 'L'){
                ans += 40;
                i++;
            }else if(i < n-1 && s[i] == 'X' && s[i+1] == 'C'){
                ans += 90;
                i++;
            }else if(i < n-1 &&s[i] == 'C' && s[i+1] == 'D'){
                ans += 400;
                i++;
            }else if(i < n-1 && s[i] == 'C' && s[i+1] == 'M'){
                ans += 900;
                i++;
            }else{
                ans += ma[s[i]];
            }
        }
        
               
        return ans;
    }
};