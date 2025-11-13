///羅馬數字
///week10-3.cpp
class Solution {
public:
    int helper(char c){///把一個字母變成一個數字
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int total = 0, prew = 0, now = 0;
        for(int i=0; i<s.length(); i++){
            prew = now;///現在變成舊的prew數字
            now = helper( s[i] );///現在新的數字
            if (prew < now) total = total - prew - prew + now;///倒裝句 前小後大，扣2次prew
            else total += now;
        }
        return total;
    }

};
