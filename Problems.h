#pragma once

#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    std::vector<int> vecResult;
    for (int i = 0; i < (int)nums.size(); i++) {
        for (int j = i + 1; j < (int)nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                vecResult.push_back(i);
                vecResult.push_back(j);

                return vecResult;
            }
        }
    }
    return vecResult;
}
