class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans;
        int count=0;
        for(int i=0;i<heights.size();i++){
            ans.push_back(heights[i]);
        }
        sort(heights.begin(), heights.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=ans[i]){
                count++;
            }
        }
        return count;
    }
};