///week01-3.cpp
# include <iostream>///使用c++的外掛，負責輸入input,輸出output
using namespace std;///使用c++的std 的[命名空間]

int main()
{
    int n;
    cin >> n;///使用c++的console input輸入文字資料
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans += i*i;
    }
    cout << ans; ///使用c++的console input輸出文字資料
}
