///week08-4.cpp
///數字黑洞
#include <iostream>
#include <vector>///伸縮自如的陣列
#include <algorithm>///演算法sort()是演算法喔
using namespace std;
int main()
{
    cout << "請輸入任意四位數(都不同):";///ex:1234 1 2 3 4
    int n;
    cin >> n;
    for (int i=0; i<7; i++){///七步之內,避掉到黑洞6174
        vector<int> a;///伸縮自如的陣列
        while (n>0) {///剝皮法,把四位數逐一撥出來
            a.push_back(n%10);///撥完就瘦了
            n = n / 10;
        }
        sort( a.begin(), a.end() );///把陣列(小到大排列)
        int M = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];///倒過來,小到大
        int m = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];///大到小
        n = M - m;
        cout << M << "減掉" << m << "得到: " << n << endl;
    }
}
