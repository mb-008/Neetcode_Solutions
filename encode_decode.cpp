class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string encoded;
        for (string str : strs)
        {
            encoded.append(to_string(str.length())).append("#").append(str);
        }
        return encoded;
    }

    vector<string> decode(string s)
    {
        vector<string> decoded;
        int i = 0;
        while (i < s.length())
        {
            int j = i;
            while (s[j] != '#')
            {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            decoded.push_back(str);
            i = j + 1 + length;
        }
        return decoded;
    }
};
