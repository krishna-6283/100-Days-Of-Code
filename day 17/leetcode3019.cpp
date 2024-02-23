class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        for(int i=0;i<s.size()-1;i++){
            char cur=tolower(s[i]);
            char next=tolower(s[i+1]);
            if(cur!=next){
                count++;
            }
        }
        return count;
    }
};