class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // second SOl 

        std::set<int> set1(nums1.begin(), nums1.end());
        std::set<int> set2(nums2.begin(), nums2.end());

        std::vector<int> res;

        for (int num : set1) {
            if (set2.find(num) != set2.end()) {
                res.push_back(num);
            }
        }

        return res;
    }
        
    
};
// first Sol 
        
        //  std::map<int, int> freq1;
        // std::map<int, int> freq2;

        // int len1 = nums1.size();
        // int len2 = nums2.size();

        // for (int i = 0; i < len1; i++) {
        //     freq1[nums1[i]]++;
        // }


        // for (int i = 0; i < len2; i++) {
        //     freq2[nums2[i]]++;
        // }

        // std::vector<int> res;

        // for (const auto& pair : freq1) {
        //     if (freq2.find(pair.first) != freq2.end()) {
        //         res.push_back(pair.first);
        //     }
        // }

        // return res;
