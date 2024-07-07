class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        // Step 1: Count the frequency of each element
        unordered_map<int, int> count;
        for (int num : nums)
        {
            count[num]++;
        }

        // Step 2: Create a vector of vectors for bucket sort
        int n = nums.size();
        vector<vector<int>> buckets(n + 1); // n+1 to handle frequencies from 0 to n
        // sort elements according to the frequency and put them in buckets
        for (const auto &pair : count)
        {
            int num = pair.first;
            int freq = pair.second;
            buckets[freq].push_back(num);
        }

        // Step 3: Gather the top k frequent elements
        vector<int> result;
        for (int i = n; i >= 0 && result.size() < k; --i)
        {
            for (int num : buckets[i])
            {
                result.push_back(num);
                if (result.size() == k)
                {
                    return result; // Return early if we have collected k elements
                }
            }
        }

        return result;
    }
};
