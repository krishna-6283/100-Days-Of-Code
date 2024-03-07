class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int k=0;
        int j=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] % 2==0){
                j=nums[k];
                nums[k]=nums[i];
                nums[i]=j;
                k++;
            }
        }
        return nums;
    }
};