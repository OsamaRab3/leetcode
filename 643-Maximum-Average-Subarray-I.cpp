class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;int len = nums.size();
        for (int i = 0; i < k; i++)
            sum += nums[i];
        double mx=sum;
        int rm=0;
        for (int i=k;i<len;i++)
        {
            sum+=nums[i];
            sum-=nums[rm];
            rm++;
            mx=max(mx,sum);
        }
        return mx/k;
    }
};