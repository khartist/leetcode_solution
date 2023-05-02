class Solution {
public:
    int arraySign(vector<int>& nums) {
       // bool check_zero = false;
        int num_negative = 0;
        for(size_t i = 0; i < nums.size(); ++i) {
            if(nums[i] == 0) {
                return 0;
            }
            if(nums[i] < 0) {
                num_negative++;
            }
        }
        if(num_negative%2 == 0) {
            return 1;
        }
        return -1;
    }
};