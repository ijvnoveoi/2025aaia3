///week05-3c.cpp part1:input part:output
///part3:stringstream part4: reverse�ϹL��
///part5:�����Y+���[+���[+���[
#include <iostream>
#include <sstream>
#include<algorithm>
using namespace std;
int main()
{
    string line;///�@��r���r��part1:input
    while ( getline(cin, line) ) {///Ū�i��
        stringstream ss(line);///part3:��stringstream�_�r
        string word;///�r��o
        ss >> word;
        reverse(word.begin(), word.end() );///part4
        cout << word;
        while ( ss >> word ) {///part3:��s�_�r
            reverse(word.begin(), word.end() );///part4
            cout << " " << word;
            ///cout << "Ū��F" << word << endl;///part3
        }
        cout << endl;///part2:output
    }
}


