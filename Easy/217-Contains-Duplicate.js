// runtime beats 83.19%
// memory beats 68.42%

var containsDuplicate = function(nums) {
    var hset = new Set();
    for(var i = 0; i < nums.length; i++){
        // 1: check set to see it has the value
        if(hset.has(nums[i])){
            // 2: return true; duplicate was found
            return true;
        }
        // 3: add the value to the set
        hset.add(nums[i]);
    }
    // 4: duplicate wasn't found
    return false;
};
