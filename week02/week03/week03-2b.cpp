///week03-2a.cpp 璶糶ㄢΩ
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;///Τ1或跑或
        for(int i=0; i<nums.size(); i++){///Τ碭计癹伴禲碭Ω
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
             ///ans *= num[i];//–Ωрnums[i]秈ans柑
        }///计禫禫1000计柑┮祘Α糶岿
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
