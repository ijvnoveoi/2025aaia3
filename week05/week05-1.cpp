///week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        ///ss >> word;///很像之前交的cin >> word
        ///cout << "請到了" << word << "\n";///測試用
        ///ss >> word;///很像之前交的cin >> word
        ///cout << "請到了" << word << "\n";///測試用
        while( ss >> word ) {///一直讀進來甚麼都不放

        }
        return word.length();///return 0;///隨便
    }
};
