class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> seen;
        vector<int> res;
        for (int val: nums){
            if (seen.contains(val)){
                res.push_back(val);
            }
            seen.insert(val);
        }
        for (int i = 1; i <= nums.size(); i ++){
            if (!seen.contains(i)){
                res.push_back(i);
            }
        }

        return res;
    }
};