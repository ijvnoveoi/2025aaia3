///week05-2.cpp
#include <iostream>///cin, cout, getline讀寫資料
#include <sstream>///stringstream需要他
#include <string>///我們的字串srtring
using namespace std;
int main()
{
    cout << "請輸入一段英文,面可有空格: ";
    string s; ///字串s
    getline(cin, s); ///一次讀入一整行，放入s
    cout << "讀到了s字串: " << s << endl;

    stringstream ss(s);///將字串s變成ss
    string word;///字串word
    while ( ss >> word ) {
        cout << "有一個字: " << word << endl;
    }
}
