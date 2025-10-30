///week08-2
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        ///�Ĥ@���q,��Ū��,�O�U��������0��i,j
        int M = matrix.size(), N = matrix[0].size();///����M�A�k��N
        vector<int> markI(M,0), markJ(N,0);///�ŧic++���}�C�A���פ��O��M�AN�A�̭����]��0
        for (int i=0; i<M; i++){
            for (int j=0; j<N; j++){
                if(matrix[i][j]==0){///�n�O�U������i,j
                    markI[i] = 1;///�аO�@�Ui���o���,���@�U���n��0
                    markJ[j] = 1;///�аO�@�Uj���o����,���@�U���n��0
                }
            }
        }
        ///�ĤG�B�J,�A�ӵ�markI,markJ���аO,�������M��0
        for (int i=0; i<M; i++){
            for (int j=0; j<N; j++){
                if (markI[i]==1 || markJ[j]==1) matrix[i][j] = 0;
            }///�p�G���аO,�A��L�������ܬ�0
        }
    }
};
