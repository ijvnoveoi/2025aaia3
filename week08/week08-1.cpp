///week08-1矩陣
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(int i=0; i<accounts.size(); i++){///左手i
            int now = 0;///迴圈前面 now = 0
            for (int j=0; j<accounts[0].size(); j++){///右手j
                now += accounts[i][j];
            }///迴圈裏面 更新now陣列 左手i右手j
            ///迴圈後面 now 拿來用
            ans = max(ans, now);///最有錢的人，更新答案
        }
        return ans;
    }
};
