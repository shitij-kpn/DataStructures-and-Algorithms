//https://leetcode.com/problems/string-to-integer-atoi
class Solution {
public:
    int myAtoi(string str) {
        long i, n;
        int sign;
	for (i = 0; isspace(str[i]); i++) ;
        if(isalpha(str[i])) return 0;
        sign = (str[i] == '-') ? -1 : 1;
        if (str[i] == '+' || str[i] == '-')
            i++;
        for (n = 0; isdigit(str[i]); i++) {
            if(n*10*sign>INT_MAX) return INT_MAX;
            else if(n*sign*10<INT_MIN) return INT_MIN;
            n = 10 * n + (str[i]-'0');
        }
	if(n*sign>INT_MAX) return INT_MAX;
        else if(n*sign<INT_MIN) return INT_MIN;
        return n*sign;
    }
};
