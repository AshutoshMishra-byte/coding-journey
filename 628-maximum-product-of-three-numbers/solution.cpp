#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int options1 = nums[n-1] * nums[n-2] * nums[n-3];
        int options2 = nums[0] * nums[1] * nums[n-1];

        return max(options1, options2);
    }
};