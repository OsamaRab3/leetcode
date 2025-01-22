class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> nondup;
        for (int num : nums) {
            if (!nondup.insert(num).second) {
                return true;
            }
        }
        return false; 
    }
};