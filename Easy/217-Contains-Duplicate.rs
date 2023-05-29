// https://leetcode.com/problems/contains-duplicate/submissions/959635161/

Runtime 16ms - Beats 81.29%
Memory 3.8 - Beats 62.65%

impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        use std::collections::HashSet;
        let mut hash_set = HashSet::new();
        nums.iter().any(|&num| !hash_set.insert(num))
    }
}
