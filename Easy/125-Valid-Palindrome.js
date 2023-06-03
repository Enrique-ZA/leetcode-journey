// runtime beats 60.1%. O(n) n is length of string. where the string is not a palindrome
// memory beats 85.98%. O(c1); where c is a constant. constant amount of space to store the pointers; reduces to O(1)

/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    // 1: Only keep alphanumeric and set to lowercase
    s = s.replace(/[^0-9a-z]/gi, '').toLowerCase(); 
    // 2: use 2 pointers to compare chars
    var left = 0;
    var right = s.length - 1;

    // 3: while left < right the pointers have not met or passed
    while (left < right) {
	// 4: check is chars are equal
        if (s[left] !== s[right]) {
            return false;
        }
	// 5: inc left pointer; dec right pointer
        left++;
        right--;
    }
    // if all chars were equal; string is a palindrome
    return true;
};
