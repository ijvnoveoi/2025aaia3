///week05-2.cpp
#include <iostream>///cin, cout, getlineŪ�g���
#include <sstream>///stringstream�ݭn�L
#include <string>///�ڭ̪��r��srtring
using namespace std;
int main()
{
    cout << "�п�J�@�q�^��,���i���Ů�: ";
    string s; ///�r��s
    getline(cin, s); ///�@��Ū�J�@���A��Js
    cout << "Ū��Fs�r��: " << s << endl;

    stringstream ss(s);///�N�r��s�ܦ�ss
    string word;///�r��word
    while ( ss >> word ) {
        cout << "���@�Ӧr: " << word << endl;
    }
}
