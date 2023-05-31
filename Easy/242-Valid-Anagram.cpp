// https://leetcode.com/problems/valid-anagram/submissions/960991852/
// Beats 46.1% runtime and 48.5% memory

class Solution {
#include <bits/stdc++.h>
public:
    bool isAnagram(string s, string t) {
        using namespace std;
        if (s.size() != t.size()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
