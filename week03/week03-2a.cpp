///week03-2a.cpp�G�X�@ �n�g�⦸
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;///�]���u��1���ƻ��ܬƻ�
        for(int i=0; i<nums.size(); i++){///�ݦ��X�ӼơA�j��]�X��
            ans *= num[i];///�C����nums[i]���ians��
        }///�Ʀr�V���V�j�A1000�ӼƦr�̡A����@�b�A�ҥH�{���g���F
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
