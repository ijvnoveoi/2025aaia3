///week10-1b.cpp
class Solution {
public:
    int countOdds(int low, int high) {
      int ans = (high-low) / 2;///用數學，基數站一半
      if (high%2==1 || low%2==1) ans++;///頭尾有基數，要++
      return ans;
    }
};
