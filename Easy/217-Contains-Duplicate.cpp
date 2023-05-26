// Runtime beats 83.63%
// Memory beats 66.37%

/**
 * Checks if a vector of integers contains any duplicate elements.
 *
 * @param nums The vector of integers to be checked for duplicates.
 * @return True if the vector contains duplicates, false otherwise.
 */
bool containsDuplicate(vector<int>& nums) {
    // Create an unordered_set to store unique elements
    unordered_set<int> hashSet;

    // Iterate through each element in the vector
    for(int i = 0; i < nums.size(); i++){
        // Check if the current element is already in the hashSet
        if(hashSet.find(nums[i]) != hashSet.end()){
            // If the element is found, it is a duplicate
            return true;
        } else {
            // If the element is not found, insert it into the hashSet
            hashSet.insert(nums[i]);
        }
    }

    // If no duplicates were found, return false
    return false;
}
