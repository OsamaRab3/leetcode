class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> u_map;
        int len = nums.size();

        for (int i = 0; i < len; ++i) {
            int complement = target - nums[i];
            if (u_map.find(complement) != u_map.end()) {
                return {u_map[complement], i};
            }
            u_map[nums[i]] = i;
        }

        return {};
    }
};