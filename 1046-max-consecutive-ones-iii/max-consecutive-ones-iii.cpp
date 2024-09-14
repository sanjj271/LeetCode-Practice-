class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    // int countzero =0;
    // int countones = 0;
    // int left = 0;
    // int prevzero;
    // int x = 0;
    // int maxones = 0;
    // for(int right =0;right<=nums.size();right++){
    //     if(nums[right]==0){
    //         countzero++;
    //     }
    //     if(countzero > k){
    //         cout<<prevzero<<endl;
    //         x = right - left;
    //         if( x > maxones){
    //             maxones = x;
    //         }
    //         left = prevzero;

    //         cout<<"RIGHT"<<right<<"LEFT"<<left<<endl;
    //         countzero -- ;

    //     }

    // }
    // return maxones;
        

    // }
        int left = 0;
        int countzero = 0;
        int maxones = 0;

        for (int right = 0; right < nums.size(); right++) {
            // Count the number of zeros in the window
            if (nums[right] == 0) {
                countzero++;
            }

            // If the number of zeros exceeds k, move the left pointer
            while (countzero > k) {
                if (nums[left] == 0) {
                    countzero--;
                }
                left++;
            }

            // Calculate the maximum length of the window
            maxones = max(maxones, right - left + 1);
        }

        return maxones;
    }
};
