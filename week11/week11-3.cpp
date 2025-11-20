///week11-3.cpp
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0;///三種鈔票
        for (int bill : bills){///C++for迴圈
            if (bill==5) d5++;///拿到五元鈔票
            if(bill==10){///客人拿十元你要找五元
                if(d5 <1)return false;///沒有五元 失敗
                d10++;///拿到十元
                d5--;///找五元
            }
            if (bill==20){///給20找15
                if (d10>0 && d5>0){///可以
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5 -= 3;
                }else return false;///找不開 失敗
            }
        }
        return true;///成功
    }
};
