///week05-3b.cpp
#include <iostream>
#include <sstream>
#include<algorithm>
using namespace std;
int main()
{
    string line;///�@��r���r��part1:input
    while ( getline(cin, line) ) {///Ū�i��
        stringstream ss(line);
        string word;
        while ( ss >> word ) {
            reverse(word.begin(), word.end() );
            cout << "Ū��F" << word << endl;
        }
        cout << line << endl;///part2:output
    }
}

