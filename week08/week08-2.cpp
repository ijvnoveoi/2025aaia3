///week08-2
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        ///第一階段,先讀完,記下全部對應0的i,j
        int M = matrix.size(), N = matrix[0].size();///左手M，右手N
        vector<int> markI(M,0), markJ(N,0);///宣告c++的陣列，長度分別為M，N，裡面都設為0
        for (int i=0; i<M; i++){
            for (int j=0; j<N; j++){
                if(matrix[i][j]==0){///要記下對應的i,j
                    markI[i] = 1;///標記一下i的這橫條,等一下都要為0
                    markJ[j] = 1;///標記一下j的這直條,等一下都要為0
                }
            }
        }
        ///第二步驟,再照著markI,markJ的標記,把整條都清為0
        for (int i=0; i<M; i++){
            for (int j=0; j<N; j++){
                if (markI[i]==1 || markJ[j]==1) matrix[i][j] = 0;
            }///如果有標記,再把他對應像變為0
        }
    }
};
