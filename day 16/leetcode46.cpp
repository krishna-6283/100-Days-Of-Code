class Solution {
public:
    void helper(vector<vector<int>> &ans,vector<int> nums, int id){
        if(id==nums.size()){
            ans.push_back(nums);
        }
        for(int i =id;i<nums.size();i++){
            swap(nums[id],nums[i]);
            helper(ans,nums,id+1);
            swap(nums[id], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int id;
        vector<vector<int>> ans;
        helper(ans, nums, 0);
        return ans;
    }
};