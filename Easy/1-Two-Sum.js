// runtime beats 80%
// memory beats 18.6%

var twoSum = function(nums, target) {
    var hmap = new Map(); // value : indeces
    for(var i = 0; i < nums.length; i++){
        // target - nums[i]
        var key = target - nums[i]
        // check key return indices
        if(hmap.has(key)){
            return [hmap.get(key),i];
        }
        // else insert
        hmap.set(nums[i], i);
        // continue
    }
    return [];
}
