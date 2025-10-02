///week04-1.cpp
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;///秨﹍碞耻硂或瞺
        while(numBottles >= numExchange) {///狦瞺计>=传计碞传
            numBottles = numBottles - numExchange + 1;///传瞺都
            ans ++ ;///耻瞺
            numExchange ++;///传夹非(瞺)
        }
        return ans;
    }
};
