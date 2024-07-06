class Solution {
public:
    void merge(vector<int>& nums, int l, int m, int r) {
        int p1 = m - l + 1, p2 = r - m;
        vector<int> part1(p1);
        vector<int> part2(p2);

        for (int i = 0; i < p1; i++)
            part1[i] = nums[l + i];
        for (int i = 0; i < p2; i++)
            part2[i] = nums[m + i + 1];

        int i = 0, j = 0, k = l;
        while (i < p1 && j < p2) {
            if (part1[i] <= part2[j]) {
                nums[k] = part1[i];
                i++;
            } else {
                nums[k] = part2[j];
                j++;
            }
            k++;
        }
        while (i < p1) {
            nums[k] = part1[i];
            i++;
            k++;
        }
        while (j < p2) {
            nums[k] = part2[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>& nums, int l, int r) {
        if (l < r) {

            int m = (l + r) / 2;
            mergeSort(nums, l, m);
            mergeSort(nums, m + 1, r);

            merge(nums, l, m, r);
        }
    }
    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};