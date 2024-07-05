class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
        {
            return false;
        }

        map<char, int> a, b;
        // map mein dono strings ke characters ke count ko store karenge

        for (int i = 0; i < s.size(); ++i)
        {
            a[s[i]]++;
        }

        for (int i = 0; i < t.size(); ++i)
        {
            b[t[i]]++;
        }
        // compare karenge characters ke count ko if they are equal or not
        for (auto it = a.begin(); it != a.end(); ++it)
        {
            if (b[it->first] != it->second)
            {
                return false;
            }
        }
        return true;
    }
};
