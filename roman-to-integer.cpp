//https://leetcode.com/problems/roman-to-integer
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m = {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int ans = 0;
        int curr = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(m[s[i]] >= curr){
                ans += m[s[i]];
            }
            else{
                ans -= m[s[i]];
            }
            curr = m[s[i]];
        }
        return ans;
    }
};



