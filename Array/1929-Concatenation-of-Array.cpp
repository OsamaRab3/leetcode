class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int l=nums.size();
        vector<int>arr(2*l);
        for (int i=0;i<l;i++)
        {
            arr[i]=nums[i];
            arr[i+l]=nums[i];

        }

        return arr;
        
    }
};