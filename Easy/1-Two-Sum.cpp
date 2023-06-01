// https://leetcode.com/problems/two-sum/submissions/961656656/

// runtime beats 94.4%
// memory beats 50.9

class Solution {
#include <bits/stdc++.h>
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        using namespace std;
        unordered_map<int, int> umap; // value : index
        for (int i = 0; i < nums.size(); i++){
            // 1: target - vector[i]
            int key = target - nums[i];
            // 2: check hashmap if found return
            if (umap.find(key) != umap.end()){
                return vector<int>{umap[key],i};
            }      
            // 3: else input in to hashmap
            umap[nums[i]] = i;
            // 4: continue
        }
        return vector<int>{};
    }
};
