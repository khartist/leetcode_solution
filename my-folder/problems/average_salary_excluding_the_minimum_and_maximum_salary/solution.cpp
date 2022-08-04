class Solution {
public:
    double average(vector<int>& salary) {
        double avg;
        sort(salary.begin(), salary.end());
        int min = salary[0], max = salary[salary.size()-1];
        for(int i=0; i<salary.size(); i++){
            avg += salary[i];
        }
        avg = avg - min - max;
        avg /= (salary.size()-2);
        return avg;
    }
};