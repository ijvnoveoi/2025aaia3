///week03-1.cpp�ǲ�c++���}�C vector<int> a;
#include <iostream>///c++��cin cout
#include <vector>///c++���}�Cvector
using namespace std;

int main()
{
    vector<int> a(2);///���Ӱ}�C�A�̭������(�}�C���j�p�O2)

    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';///�L�X�}�C
    cout << endl;///����

    a.push_back(99); ///��99����}�Ca����᭱
    a.push_back(77); ///��77����}�Ca����᭱

    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';///�L�X�}�C
    cout << endl;///����
}
