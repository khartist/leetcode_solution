class Solution {
public:
    int mySqrt(int x) {
        long long i = 1;
        long long temp;
        while(true){
            temp = i*i;
            if(temp > x){
                return int(i-1);
            }
            else if (temp == x){
                return int(i);
            }
            i++;
        }
    }
};