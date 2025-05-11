#include <vector>
using std::vector;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        size_t oldSize = nums.size();
        nums.resize(oldSize * 2);
        for (size_t i = 0; i < oldSize; i++) {
            nums[i + oldSize] = nums[i];
        }

        return nums;
    }
};