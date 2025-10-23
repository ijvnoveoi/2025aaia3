///week07-2.cpp像話星星一樣
///畫出超大正方形， 數字包起來
///期中考第6題
#include <iostream>
#include <cmath>///就是c的math.h裡面有sin(), cos(), abs(), sqrt()
using namespace std;
int main()
{
    int n;///part1:input
    cin >> n;

    for (int i=1; i<n*2; i++){///part2:output
        for (int j=1; j<n*2; j++){
            ///印出來後，發現政中心的1很有意思
            int d = max(abs(i-n), abs(j-n));
            cout << d+1;///cout << n;
        }
        cout << endl;///cout << "現在i是:" << i << endl;///樓層的概念
    }
}
