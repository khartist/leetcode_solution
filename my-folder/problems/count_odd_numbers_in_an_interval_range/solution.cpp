class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        int temp = high - low;
        temp /= 2;
        if (high%2==1||low%2==1) temp++;
        count = temp;
        return count;
    }
};