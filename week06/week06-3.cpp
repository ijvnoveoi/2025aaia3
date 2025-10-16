///week06-3.cpp
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op : operations) {///c++進階迴圈
            ///cout << op << "\n";//試試看會印出甚麼
            if(op[0]=='+'){///把末兩數相加，在塞回去
               int temp = a.back();///先記下最後一項
               a.pop_back();///暫時吐掉他
               int temp2 = a.back();///再記下最後兩項
               a.push_back(temp);///把最後一項塞回去
               a.push_back( temp+temp2);///兩數相加再塞回去
            }else if (op[0]=='D'){///複製最後1位乘2倍再塞回去
                a.push_back( a.back()*2 );
            }else if (op[0]=='C'){///吐掉最後一位
                a.pop_back();
            }else{///把stoi(op)整數塞回去
                a.push_back(stoi (op));
            }
        }
        ///最後，用for迴圈，把陣列a的值，全部加起來
        int ans = 0;
        for(int now : a){///c++進階迴圈，也可以用for
            ans += now;
        }
        return ans;
    }
};
