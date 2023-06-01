// runtime beats 73.83%
// memory beats 100%

var isAnagram = function(s, t) {
    // Solution 1: Sorted Strings
    // 1: check length; length has to be equal to be an anagram
    //if(s.length !== t.length){
        //return false;
    //}
    // 2. sort the string alphabetically
    //var sortedS = s.split('').sort().join('');
    //var sortedT = t.split('').sort().join('');
    // 3. if the strings are the same then it is an anagram
    //return sortedS === sortedT;

    // Solution 2; using hashmap
  
    // 1: check length; length has to be equal to be an anagram
    if(s.length !== t.length){
        return false;
    }
    // 2: Use a hashmap
    var count = {};
    for (var i = 0; i < s.length; i++) {
        var sChar = s[i], tChar = t[i];
        // 3: count the occurences for s inc fot t dec - if a is 3 in s and t then we expect to see 0
        count[sChar] = (count[sChar] || 0) + 1; // default value is 0 when key is not in hashmap yet
        count[tChar] = (count[tChar] || 0) - 1; // default value is 0 when key is not in hashmap yet
    }
    for (var key in count) {
        // if it is not 0 then it is not an anagram
        if (count[key] !== 0) {
            return false;
        }
    }
    // all keys were 0; therefore anagram
    return true;
};
