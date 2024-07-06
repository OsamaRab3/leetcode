class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int numbers=0;
        int left=0,right=size-1;
        while(left<right)
        {
            if (nums[left]+nums[right]<target)
            {
                numbers+=(right-left);
                left++;
            }
            else 
                right--;
        }
        return numbers;
    }
};