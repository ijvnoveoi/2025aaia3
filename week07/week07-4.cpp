///week07-4.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions;///���|��
        cout << instructions;
        int x=0, y=0;///�y��x, y
        int d = 0;///d:��V0:�_�A 1:�F�A 2:�n�A 3::��
        ///�k��d = (d+1) % 4��4���l��
        ///����d = (d+3) % 4�A4���M�i�H�˹L��
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};
        for (char c : instructions){
            if (c=='G'){///�e�i�@��A�t�Xdx[d] dy[d]�e�i
                x += dx[d];
                y += dy[d];
            }else if (c=='R'){///�k��
                d = (d+1) % 4;
            }else if (c=='L'){///����
                d = (d+3) % 4;
            }
        }///���}�j��ɳ��M�|�@�����A���ɭԨ����^�ӡA���ɭԥi�H
        cout << 'x' << x << 'y' << y << endl;
        if(x==0 && y==0) return true;
        else return false;
    }
};
