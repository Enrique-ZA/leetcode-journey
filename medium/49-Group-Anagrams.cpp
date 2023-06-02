// runtime beats 14% - O(mn) n - size of input array; m - max length of any string in array
// memory beats 12% - O(mn) n - size of input array; m - max length of any string in array

class Solution {
#include <bits/stdc++.h>
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        using namespace std;
        // 1: hashmap to store array of strings that are anagrams
        unordered_map<string, vector<string>> res;
        // 2: loop strs
        for (auto& s : strs) {
            // 3: array of integers for a ... z; 26 alphabet letters
            array<int, 26> count = {0};
            for (char c : s) {
                // 4: increment the count for a char
                count[c - 'a']++;
            }
            // 5: key as string for hashmap for each char
            // seperated by #
            string key;
            for (int c : count) {
                key += '#';
                key += to_string(c);
            }
            //  6: instert string at key into hashmap
            res[key].push_back(s);
        }
        // 7: return the array of arrays of strings
        vector<vector<string>> result;
        for (auto& p : res) {
            result.push_back(move(p.second));
        }
        return result;
    }
};
