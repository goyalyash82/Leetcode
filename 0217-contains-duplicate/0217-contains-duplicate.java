class Solution {
    public boolean containsDuplicate(int[] nums) {
       HashSet<Integer> su=new HashSet<>();
       for(int i=0;i<nums.length;i++){
        su.add(nums[i]);
       }
       if(su.size()!=nums.length){
        return true;
       }
       return false;
    }
}