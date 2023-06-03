// runtime beats 52.19%. O(n) n is length of string. where the string is not a palindrome
// memory beats 45.83%. O(c1); where c is a constant. constant amount of space to store the pointers; reduces to O(1)

impl Solution {
    pub fn is_palindrome(s: String) -> bool {
        // 1: return true for empty strings
        if s.is_empty() {
            return true;
        }
            
        // 2: use 2 pointers to compare chars
        let s = s.chars().collect::<Vec<char>>();
        let (mut left, mut right) = (0, s.len() );
        
        // 3: while left < right the pointers have not met or passed
        while left < right {
            // 4: skip non-alphanumeric chars
            while left < right && !s[left].is_alphanumeric() {
                left += 1;
            }
            while left < right && !s[right - 1].is_alphanumeric() {
                right -= 1;
            }
            // 5: check is chars are equal
            if left < right && s[left].to_ascii_lowercase() != s[right - 1].to_ascii_lowercase() {
                return false;
            }
            // 6: inc left pointer; dec right pointer
            left += 1;
            right -= 1;
        }
        // 7: if all chars were equal; string is a palindrome
        true        
    }
}


