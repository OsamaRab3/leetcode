class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c=0;
        int l=nums.size();
        for (int i=0;i<l;i++)
        {
            for (int j=i+1;j<l;j++)
            {
                if (nums[i]==nums[j])
                    c++;
            }
        }
        return c;
    }
};