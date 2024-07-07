class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>u_set;
        for (auto it:nums)
        {
            if (u_set.count(it))
                return true ;
            else 
                u_set.insert(it);
        }

        return false;

        
    }
};