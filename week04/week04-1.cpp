///week04-1.cpp
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;///�@�}�l�N�ܤF�o��h�~
        while(numBottles >= numExchange) {///�p�G�~�l��>=�I���ơA�N�I��
            numBottles = numBottles - numExchange + 1;///�I���@�~����
            ans ++ ;///�h�ܤF�@�~
            numExchange ++;///�I�����з�(�h�@�~)
        }
        return ans;
    }
};
