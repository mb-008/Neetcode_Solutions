class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        // answer storne krne ke liye map
        unordered_map<string, vector<string>> ans;
        for (auto &s : strs)
        {
            // character count in each word
            vector<int> count(26, 0);
            for (char c : s)
            {
                count[c - 'a']++;
            }
            // map ke liye key form kr rahe hn based on character count anagrams mein same keys form hogi
            string key;
            for (int i : count)
            {
                key += "#" + to_string(i);
            }
            // push kr rahe hn anagrams ko same key mein
            ans[key].push_back(s);
        }
        // result ko store krne ke liye ek data structure
        vector<vector<string>> result;
        // iterating map to store result and return it
        for (auto &pair : ans)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};
