class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int n=nums.size();
        int unq=1;
        int i = 0;
        int j=1;
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }
            else if(nums[i]!=nums[j]){
                i++;
                swap(nums[i],nums[j]);
                j++;
                unq++;
            }
        }return unq;
    }
};
