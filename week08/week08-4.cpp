///week08-4.cpp
///�Ʀr�¬}
#include <iostream>
#include <vector>///���Y�ۦp���}�C
#include <algorithm>///�t��ksort()�O�t��k��
using namespace std;
int main()
{
    cout << "�п�J���N�|���(�����P):";///ex:1234 1 2 3 4
    int n;
    cin >> n;
    for (int i=0; i<7; i++){///�C�B����,�ױ���¬}6174
        vector<int> a;///���Y�ۦp���}�C
        while (n>0) {///��֪k,��|��Ƴv�@���X��
            a.push_back(n%10);///�����N�G�F
            n = n / 10;
        }
        sort( a.begin(), a.end() );///��}�C(�p��j�ƦC)
        int M = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];///�˹L��,�p��j
        int m = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];///�j��p
        n = M - m;
        cout << M << "�" << m << "�o��: " << n << endl;
    }
}
