///week04-3.cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();///�}�C���j�p
        for (int i=N-1; i>=0; i--){///��L�Ӫ��j��
            if (digits[i]==9){///�i��
                digits[i] = 0;///�]��0�A�~�򰵡A������
            }else{///���ζi�쪺�ܡA����++�N�����F
                digits[i]++;///²��+1
                return digits;///��������}�C(����)return
            }
        }
        digits.insert( digits.begin(), 1);///�̥���˴��J1
        return digits;///����
    }
};
