class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>ans;
        for(int i =0;i<nums.size();i++){
            int diff = target - nums[i];
            if(mp.find(nums[i])==mp.end()){
                mp[diff]=i;
            }
            else if(mp.find(nums[i])!=mp.end()){
                    ans.push_back(mp[nums[i]]);
                    ans.push_back(i);


        }
        

        }
        return ans;

        
    }
};