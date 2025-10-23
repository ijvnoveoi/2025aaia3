///week07-4.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions;///走四次
        cout << instructions;
        int x=0, y=0;///座標x, y
        int d = 0;///d:方向0:北， 1:東， 2:南， 3::西
        ///右轉d = (d+1) % 4取4的餘數
        ///左轉d = (d+3) % 4，4竟然可以倒過來
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};
        for (char c : instructions){
            if (c=='G'){///前進一格，配合dx[d] dy[d]前進
                x += dx[d];
                y += dy[d];
            }else if (c=='R'){///右轉
                d = (d+1) % 4;
            }else if (c=='L'){///左轉
                d = (d+3) % 4;
            }
        }///離開迴圈時竟然會一直走，有時候走不回來，有時候可以
        cout << 'x' << x << 'y' << y << endl;
        if(x==0 && y==0) return true;
        else return false;
    }
};
