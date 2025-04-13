class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int a;
        int high=nums.size()-1;
        if(target<nums[0]){
            return 0;
        }
        if(target>nums[nums.size()-1]){
            return nums.size();
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(nums[mid]<target){
                low =mid+1;
            }
            else{
                high=mid-1;
            }
            
            

        }
        return low;




    }
};