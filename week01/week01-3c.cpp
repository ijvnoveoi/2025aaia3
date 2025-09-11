///week01-3c.cpp
# include <stdio.h>///使用c語言的外掛，負責輸入input,輸出output


int main()
{
    int n;
    scanf("%d", &n);///使用c語言的scan with format讀入
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans +=i*i;
    }
    printf("%d", ans);///使用c語言的print with format印出來
}

