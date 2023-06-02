// runtime beats 24.21%. O(n) n is length of string. where the string is not a palindrome
// memory beats 77.9%. O(c1); where c is a constant. constant amount of space to store the pointers; reduces to O(1)

class Solution {
#include <bits/stdc++.h>
public:
    bool isPalindrome(string s) {
        using namespace std;
        // 1: use 2 pointers at index 0 and index length - 1
        int left = 0;
        int right = s.length() - 1;

        // 2. while left < right the 2 pointers have not met or passed
        while(left < right){
            // 3: skip chars that are not alphanumeric
            while(left < right && !iswalnum(s[left])){
                left++;
            }
            while(right > left && !iswalnum(s[right])){
                right--;
            }
            // 4: set chars to the same case and compare
            // return false if cars do not match
            if (tolower(s[left]) != tolower(s[right])){
                return false;
            }
            // 5: increment left pointer; decrement right pointer
            left++;
            right--;
        }
        // 6: since all chars must match we return true
        // as string is a palindrome
        return true;
    }
};
