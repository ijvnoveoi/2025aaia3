///week07-3.cpp
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};///大括號為初始值，裡面空的代表都是0
        int now = 1;///現在的玩家A，B
        int winner = 0;///還沒有找到勝者
        for (vector<int>& move : moves){
            int i = move[0], j = move[1];///取出座標
            a[i][j] = now;///把旗子下在陣列裡
            ///下完後看有沒有得勝
            if (now==a[i][0] && now==a[i][1] && now==a[i][2]) winner = now;///橫線
            if (now==a[0][j] && now==a[1][j] && now==a[2][j]) winner = now;///直線
            if (now==a[0][0] && now==a[1][1] && now==a[2][2]) winner = now;///左上右下斜線
            if (now==a[0][2] && now==a[1][1] && now==a[2][0]) winner = now;///右上左下斜線
            if (now==1) now = 2;///兩人要交換1換2
            else now = 1;///或2換1
        }
        if (winner ==1)return "A";
        else if (winner ==2)return "B";
        else if (moves.size()==9) return "Draw";
        else return "Pending";///送出去發現還有四個可能，叫pending還沒下完
    }
};
