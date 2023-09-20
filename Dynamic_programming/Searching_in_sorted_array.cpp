#include <iostream>
#include <vector>

class Solution {
public:
    bool search(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 3;

    if (solution.search(nums, target)) {
        std::cout << "Target found in the vector." << std::endl;
    } else {
        std::cout << "Target not found in the vector." << std::endl;
    }

    return 0;
}
