///wqeek03-3b.cpp�G�X�@���Ĥ@�ؤ�k �⤣�O0����X��
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        }
        ///�A��for�j���^�h
        for(int i=0; i<nums.size(); i++){
            if(i < ans.size()) nums[i] = ans[i];
            else nums[i] = 0;
        }
    }
};
