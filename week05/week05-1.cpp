///week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        ///ss >> word;///�ܹ����e�檺cin >> word
        ///cout << "�Ш�F" << word << "\n";///���ե�
        ///ss >> word;///�ܹ����e�檺cin >> word
        ///cout << "�Ш�F" << word << "\n";///���ե�
        while( ss >> word ) {///�@��Ū�i�Ӭƻ򳣤���

        }
        return word.length();///return 0;///�H�K
    }
};
