///week03-4.cpp
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ///triangle[i][j]��i�h��j�Ӽ�
        int N = triangle.size();
        ///�q�U���W�d�A�̤U����N-1�h�A�S���D�A�N�O�������̤p�ȡA�ҥHN-2���W��s
        for(int i=N-2; i>=0; i--){///��L�Ӫ��j��A�qN-2���W
            for(int j=0; j<=i; j++){///�q����k�A��i����0...i�ӼơA���n��s
            triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};
