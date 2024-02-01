class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool>v1;
    int max_el = INT_MIN;
    for(int i =0;i<candies.size();i++){
        if(candies[i]>=max_el){
            max_el = candies[i];
        }
    }
    for(int i =0;i<candies.size();i++){
        if(candies[i]+extraCandies >= max_el){
            v1.push_back(true);
        }
        else{
            v1.push_back(false);
        }
    }
    return v1;

        
    }
};