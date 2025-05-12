#include <unordered_map>
#include <string>
#include <vector>
using std::unordered_map, std::string, std::pair, std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        typedef pair<int, int> numIdx;
        unordered_map<int, int> sum;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int req = target - num;
            if (sum.count(num)) {
                return {sum[num], i};
            }
            sum[req] = i;
        }

        return {-1, -1};
    }
};