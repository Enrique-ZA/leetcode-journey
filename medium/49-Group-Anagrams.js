// runtime beats 77.48%. O(nmlogm)
// memory beats 28.8%. O(nm)

var groupAnagrams = function(strs) {
    // 1: hashmap to store string as key array of strings as value
    var hmap = new Map();
    for(let s of strs){
        // 2: create string key
        var key = s.split('').sort().join('');
        // 3: check if key is not yet present
        if(!hmap.has(key)) {
            hmap.set(key, []);
        }
        // 4: add the string to the array for the key in the hashmap
        hmap.get(key).push(s);
    }
    // 5: return result
    return Array.from(hmap.values());
};

