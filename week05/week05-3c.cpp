///week05-3c.cpp part1:input part:output
///part3:stringstream part4: reverse反過來
///part5:火車頭+車廂+車廂+車廂
#include <iostream>
#include <sstream>
#include<algorithm>
using namespace std;
int main()
{
    string line;///一行字的字串part1:input
    while ( getline(cin, line) ) {///讀進來
        stringstream ss(line);///part3:用stringstream斷字
        string word;///字放這
        ss >> word;
        reverse(word.begin(), word.end() );///part4
        cout << word;
        while ( ss >> word ) {///part3:用s斷字
            reverse(word.begin(), word.end() );///part4
            cout << " " << word;
            ///cout << "讀到了" << word << endl;///part3
        }
        cout << endl;///part2:output
    }
}


