///week01-3c.cpp
# include <stdio.h>///�ϥ�c�y�����~���A�t�d��Jinput,��Xoutput


int main()
{
    int n;
    scanf("%d", &n);///�ϥ�c�y����scan with formatŪ�J
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans +=i*i;
    }
    printf("%d", ans);///�ϥ�c�y����print with format�L�X��
}

