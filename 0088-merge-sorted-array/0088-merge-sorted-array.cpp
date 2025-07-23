class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // for(int i=nums1.size()-1;i>=m;i--){
        //     nums1.pop_back();

        // }
        // for(int i=nums2.size()-1;i>=n;i--){
        //     nums2.pop_back();

        // }
        nums1.resize(m);
        nums2.resize(n);
                nums1.insert(nums1.end(),nums2.begin(),nums2.end());
                sort(nums1.begin(),nums1.end());
        cout<<"[";
        for(int i=0;i<nums1.size();i++){
            cout<<nums1[i];
            if(i!= (nums1.size()-1) ){
                cout<<",";
            }
        }
        cout<<"]";



    }
};