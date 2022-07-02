#pragma once

#include <iostream>
#include <string>
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

std::string zigZag(std::string s, int numRows)
{
    std::vector<std::string> str(std::min((int)s.size(), numRows));
    bool goingUp = true;
    int currentRow = 0;
    for (auto c : s) {
        str[currentRow] += c;
        if (currentRow == 0 || currentRow == numRows - 1)
            goingUp = !goingUp;
        if (goingUp)
            currentRow -= 1;
        else
            currentRow += 1;
    }

    std::string res;
    for (auto row : str) {
        res += row;
    }
    std::cout << res << std::endl;
    return res;
}
