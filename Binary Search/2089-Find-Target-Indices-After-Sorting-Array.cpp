class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // sorting array
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        vector<int> result;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] == target) {
                int start = mid, end = mid;

                while (start > l && nums[start - 1] == target) {
                    --start;
                }
                while (end < r && nums[end + 1] == target) {
                    ++end;
                }
                for (int i = start; i <= end; ++i) {
                    result.push_back(i);
                }

                return result;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return result;
    }
};