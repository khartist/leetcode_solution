class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int res = 0, i = 0, j = people.size()-1;
        vector<bool> check;
        for(size_t k = 0; k<people.size(); ++k){
            check.push_back(false);
        }
        while(i<j){
            cout<<i<<" "<<j<<endl;
            if(people[i]+people[j]<=limit){
                res++;
                check[i]=true;
                check[j]=true;
                i++;
                j--;
            }
            else{
                j--;
            }
            
        }
        for(size_t k = 0; k<check.size(); ++k){
            if(!check[k]){
                res++;
            }
        }
        return res;
    }
};