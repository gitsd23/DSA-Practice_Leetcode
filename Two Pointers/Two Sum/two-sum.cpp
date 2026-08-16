#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> twoSum(std::vector<int>& nums, int target) {
        vector<std::pair<int, int>> vec;
        for (int i = 0; i < nums.size(); i++) {
            vec.push_back({nums[i], i});
        }
        
        sort(vec.begin(), vec.end());
        
        int left = 0;
        int right = vec.size() - 1;
        
        while (left < right) {
            int current_sum = vec[left].first + vec[right].first;
            if (current_sum == target) {
                return {vec[left].second, vec[right].second};
            }
            else if (current_sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {}; 
    }
};
