class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
    int first = firstOccurence(nums,target);
    int last = lastOccurence(nums,target);
    cout<<first<<" "<<last;
    int freq = abs(last - first) + 1;
    if(nums.size()==1 && target!=nums[0]){
        return false;
    }
    if(freq>nums.size()/2){
        return true;
    }
    return false;
        
    }
    int firstOccurence(vector<int>& nums, int target){
    int r = nums.size()-1;
    int l =0;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(nums[mid]==target){
            if(mid!=0 && nums[mid-1]!=target){
                return mid;
            }
            else if(mid==0 && nums[mid]==target){
                return mid;
            }
            else if(mid!=0 && nums[mid-1]==target){
                r = mid-1;
            }
        }
        else if(nums[mid]<target){
            l = mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return 0;
    

    }
    int lastOccurence(vector<int>& nums, int target){
    int r = nums.size()-1;
    int l =0;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(nums[mid]==target){
            cout<<mid<<"MID"<<endl;
            if(mid!=nums.size()-1 && nums[mid+1]!=target){
                return mid;
            }
            else if(mid==nums.size()-1 && nums[mid]==target){
                cout<<'YA'<<endl;
                return mid;
            }
            else if(mid!=nums.size()-1  && nums[mid+1]==target){
                cout<<"HERE"<<endl;
                l = mid+1;
                cout<<l<<"L"<<endl;
            }
        }
        else if(nums[mid]<target){
            l = mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return 0;

    }

};