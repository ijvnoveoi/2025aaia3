///week10-2.cpp
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0;///把薪水都加進來
        int N = salary.size();///總共有N個人
        int M = salary[0], m = salary[0];
        for (int i=0; i<N; i++){
            total += salary[i];///把薪水都加進來
            if(salary[i]>M) M = salary[i];
            if(salary[i]<m) m = salary[i];
        }
        ///return total / N;
        return (total - M - m) / (N-2);
    }
};
