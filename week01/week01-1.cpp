///haystack: sadbutsad
///needle:   sad
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length();//�r�����
        for(int i=0 ; i <= H - N ; i++) {//9��3����6
            if( haystack.substr(i, N) == needle) return i;
        }
        return -1;
    }
};
