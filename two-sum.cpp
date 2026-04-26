#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(std::vector<int>& nums, int target) {
        unordered_map<int, int> h;
        for (int i = 0; i < nums.size(); i++) {
            int val = target - nums[i];
            if (h.find(val) != h.end()) {
                return {h[val], i};
            }
            else h[nums[i]] = i;
        }
        return {};
    }
};
