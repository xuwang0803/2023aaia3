class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int num:nums)
        {
            ans*=num;
        }
        if
        if(ans>0) return 1;
        if(ans==0) return 0;

        else return-1;
    }
};
