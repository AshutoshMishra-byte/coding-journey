class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int maxVal = *max_element(nums.begin(), nums.end());
        int size = 1;
        while (size <= maxVal) size <<= 1;  

        vector<bool> pairXorSeen(size, false);
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                pairXorSeen[nums[i] ^ nums[j]] = true;
            }
        }

        vector<bool> tripletSeen(size, false);
        int count = 0;
        for (int p = 0; p < size; ++p) {
            if (!pairXorSeen[p]) continue;
            for (int k = 0; k < n; ++k) {
                int val = p ^ nums[k];
                if (!tripletSeen[val]) {
                    tripletSeen[val] = true;
                    ++count;
                }
            }
        }

        return count;
    }
};