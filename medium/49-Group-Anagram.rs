// runtime beats 49.8% - O(nmlogm)
// memory beats 40.81 - O(nm)

impl Solution {
    pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
        use std::collections::HashMap;
        // 1: hashmap to store string as key and array of strings as value
        let mut hmap: HashMap<String, Vec<String>> = HashMap::new();

        for s in strs {
            // 2: create and sort string key
            let mut key = s.clone();
            let mut key_chars: Vec<char> = key.chars().collect();
            key_chars.sort();
            key = key_chars.into_iter().collect();

            // 3: add the string to the array for the key in the hashmap
            hmap.entry(key).or_insert(vec![]).push(s);
        }

        // 4: return result
        let mut result: Vec<Vec<String>> = vec![];
        for kv in hmap {
            result.push(kv.1);
        }

        result       
    }
}
