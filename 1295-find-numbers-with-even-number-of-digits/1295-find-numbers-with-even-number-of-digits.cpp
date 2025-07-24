class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            count = 0;
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                count++;
            }
            v.push_back(count);
        }
        int sum =0;
        for( int i=0;i<v.size();i++){
            if(v[i]%2==0){
                sum++;
            }
        }
        return sum;
    }
};