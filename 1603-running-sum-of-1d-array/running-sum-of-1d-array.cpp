class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    int prefixsum = 0;
    vector<int>res;
    res.push_back(nums[0]);
    for(int i = 1;i<nums.size();i++){
        prefixsum = res[i-1] + nums[i];
        res.push_back(prefixsum);
    }
    return res;
        
    }
};