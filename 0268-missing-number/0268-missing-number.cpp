class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        // Intuition: after sorting, nums[i] should equal i
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) return i;
        }
        return n;
    }
};