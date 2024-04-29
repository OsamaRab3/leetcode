class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=-1;
        int l=-1;
        for (int i=0;i<nums.size();i++)
        {
            if (target!=nums[i])
                continue;
            if (f==-1)  
                f=i;
            l=i;
        }
      return {f,l};  
    }
};