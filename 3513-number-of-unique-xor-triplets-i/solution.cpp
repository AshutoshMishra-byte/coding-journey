class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if(n < 3){
            return n;
        }
        int bit_length = std::__lg(n) + 1;
        return 1 << bit_length;
    }
};