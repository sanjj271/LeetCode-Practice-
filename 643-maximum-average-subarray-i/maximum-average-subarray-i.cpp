class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    int left = 0;
    double avg  ;
    double maxavg = -9999;
    double sum =0;
    if(nums.size()==1 && k == 1){
        return nums[0];
    }
    for(int right = 0; right <= nums.size();right ++){
    if(((right - left) + 1) >k){
            avg = sum/k;
            if(avg > maxavg){
                maxavg = avg;
                
            }
            sum = sum - nums[left];
            left ++;
     }
     sum = sum + nums[right]; 

    }
    return maxavg;


        
    }
};