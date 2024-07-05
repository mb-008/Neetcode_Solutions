class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        int n = nums.size();
        unordered_map<int, int> mp;
        int rem = 0;
        for (int i = 0; i < n; i++)
        {
            // how much number jo chahiye to get the target
            int rem = target - nums[i];
            // if we have that number in the map and that it does not point to the end of map
            if (mp.find(rem) != mp.end())
            { // agar answer mil gaya toh return kardo
                return {mp[rem], i};
            }
            // else insert the number with index in the map
            mp.insert({nums[i], i});
        }
        return {};
    }
};
