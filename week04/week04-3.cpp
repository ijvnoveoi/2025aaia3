///week04-3.cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();///陣列的大小
        for (int i=N-1; i>=0; i--){///到過來的迴圈
            if (digits[i]==9){///進位
                digits[i] = 0;///設成0，繼續做，不結束
            }else{///不用進位的話，直接++就結束了
                digits[i]++;///簡單+1
                return digits;///把全部的陣列(當答案)return
            }
        }
        digits.insert( digits.begin(), 1);///最左邊樣插入1
        return digits;///結束
    }
};
