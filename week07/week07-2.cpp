///week07-2.cpp���ܬP�P�@��
///�e�X�W�j����ΡA �Ʀr�]�_��
///�����Ҳ�6�D
#include <iostream>
#include <cmath>///�N�Oc��math.h�̭���sin(), cos(), abs(), sqrt()
using namespace std;
int main()
{
    int n;///part1:input
    cin >> n;

    for (int i=1; i<n*2; i++){///part2:output
        for (int j=1; j<n*2; j++){
            ///�L�X�ӫ�A�o�{�F���ߪ�1�ܦ��N��
            int d = max(abs(i-n), abs(j-n));
            cout << d+1;///cout << n;
        }
        cout << endl;///cout << "�{�bi�O:" << i << endl;///�Ӽh������
    }
}
