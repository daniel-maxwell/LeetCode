class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i += 3) {
            vector<int> subArr(nums.begin() + i, nums.begin() + i + 3);
            if (subArr[2] - subArr[0] > k) return vector<vector<int>>{};
            result.push_back(subArr);
        }
        return result; 
    }
};