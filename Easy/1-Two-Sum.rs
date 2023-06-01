// https://leetcode.com/problems/two-sum/submissions/961656656/

// runtime beats 100%
// memory beats 50.9%

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        use std::collections::HashMap;
        let mut umap: HashMap<i32, i32> = HashMap::new();
        for (i, num) in nums.iter().enumerate() {
            let key = target - num;
            if let Some(&val) = umap.get(&key) {
                return vec![val, i as i32];
            }
            umap.insert(*num, i as i32);
        }
        Vec::new()
    }
}
