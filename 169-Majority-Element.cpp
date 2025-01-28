class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int, int> frq;
        for (int num : nums) {
            frq[num]++;
        }
        int n = nums.size();
        for (auto& pair : frq) {
            if (pair.second > n / 2) {
                return pair.first;
            }
        }
        return -1;
        
    }
};