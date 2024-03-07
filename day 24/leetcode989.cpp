class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int rem=0;
        vector<int> ans;
        if(num[0]==0){
            while(k>0){
            rem=k;
            ans.push_back(rem%10);
            k=k/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        }
        reverse(num.begin(),num.end());
        int carry=0;
        
        for(int i=0;i<num.size();i++){
            rem=k%10;
            int sum=num[i] + carry + rem;
            ans.push_back(sum%10);
            carry=sum/10;
            k=k/10;
        }
        while(k>0){
            rem=k%10+carry;
            ans.push_back(rem%10);
            carry=rem/10;
            k=k/10;
        }
        if(carry==1){
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};