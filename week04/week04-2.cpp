///week04-2.cpp
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0, down=0;///up增 down減
        for(int i=1; i<nums.size(); i++){///兩兩比較
            if(nums[i-1] < nums[i] ) up = 1;///增加
            if(nums[i-1] > nums[i] ) down = 1;///減少
        }
        if(up==1 && down==1) return false;///不可又增又減
        return true;///沒有失半就成功
    }
};
