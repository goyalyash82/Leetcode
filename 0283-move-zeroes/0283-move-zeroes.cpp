class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        int count=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            v.push_back(nums[i]);
        }
        else{
            count++;
        }
      }
      while(count>0){
        v.push_back(0);
        count--;}
        nums=v;
      
        // cout<<"[";
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i];
        //     if(i!=nums.size()-1){
        //         cout<<",";


        //     }
        // }
        // cout<<"]";
    }
};