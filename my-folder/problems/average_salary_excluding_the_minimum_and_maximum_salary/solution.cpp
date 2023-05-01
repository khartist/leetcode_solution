class Solution {
public:
    double average(vector<int>& salary) {
        int maxEle = INT_MIN, minEle = INT_MAX;
        for(size_t i = 0; i < salary.size(); ++i) {
            if(maxEle<salary[i]) {
                maxEle = salary[i];
            }
            if(minEle>salary[i]) {
                minEle = salary[i];
            }
        }
        long long total = 0;
        for(size_t i = 0; i < salary.size(); ++i) {
            if(salary[i]==maxEle||salary[i]==minEle) {
                continue;
            }
            else total += salary[i];
        }
        return double(total*1.0 / (salary.size()-2));
    }
};