///week06-3.cpp
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op : operations) {///c++�i���j��
            ///cout << op << "\n";//�ոլݷ|�L�X�ƻ�
            if(op[0]=='+'){///�⥽��Ƭۥ[�A�b��^�h
               int temp = a.back();///���O�U�̫�@��
               a.pop_back();///�ȮɦR���L
               int temp2 = a.back();///�A�O�U�̫�ⶵ
               a.push_back(temp);///��̫�@����^�h
               a.push_back( temp+temp2);///��Ƭۥ[�A��^�h
            }else if (op[0]=='D'){///�ƻs�̫�1�쭼2���A��^�h
                a.push_back( a.back()*2 );
            }else if (op[0]=='C'){///�R���̫�@��
                a.pop_back();
            }else{///��stoi(op)��ƶ�^�h
                a.push_back(stoi (op));
            }
        }
        ///�̫�A��for�j��A��}�Ca���ȡA�����[�_��
        int ans = 0;
        for(int now : a){///c++�i���j��A�]�i�H��for
            ans += now;
        }
        return ans;
    }
};
