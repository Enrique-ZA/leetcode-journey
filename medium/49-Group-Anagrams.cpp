// runtime beats 85.18% - O(nmlogm)
// memory beats 77.64% - O(nm)

class Solution {
#include <bits/stdc++.h>
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // 1: hashmap to store string as key and vector of strings as value
        std::unordered_map<std::string, std::vector<std::string>> hmap;

        for(std::string& s : strs){
            // 2: create and string key
            std::string key = s;
            std::sort(key.begin(), key.end());
            
            // 3: add the string to the vector for the key in the hashmap
            hmap[key].push_back(s);
        }

        // 4: return result
        std::vector<std::vector<std::string>> result;
        for(auto& kv : hmap){
            result.push_back(kv.second);
        }
        
        return result;
    }
};
