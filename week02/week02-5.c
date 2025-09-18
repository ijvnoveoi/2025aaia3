///week02-5.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};///陣列宣告，ASCII;0-255陣列用大括號的預設值0
        for(int i=0; i<s.length(); i++){
            char c = s[i];///找到第i個字母
            A[c]++;
        }
        for(int i=0; i<t.length(); i++){
            char c = t[i];
            A[c]--;
            if(A[c] < 0) return c;
        }
        return 0;
    }
};
