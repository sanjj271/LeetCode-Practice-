class Solution {
public:
    int minStartValue(vector<int>& nums) {
    int prefixsum;
    vector<int>res;
    res.push_back(nums[0]);
    for(int i =1;i<nums.size();i++){
        prefixsum = res[i-1] + nums[i];
        res.push_back(prefixsum);
    }
    
    int min = INT_MAX;
    for(int i =0;i<res.size();i++){
        cout<<res[i]<<endl;
        if(res[i] < min){
            min = (res[i]);
        }
    }
    if(min < 0){
        cout<<"HERE"<<endl;
        return abs(min) + 1;
    }
    return 1;
        
    }
};