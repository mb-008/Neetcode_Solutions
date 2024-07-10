class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.lenght();
        vector<int> left(n);
        left[0] = 1;
        // element ke left side ke sare elements ka product
        for (int i = 1; i < n; ++i)
        {
            left[i] = left[i - 1] * nums[i - 1];
        }
        vector<int> right(n);
        right[n - 1] = 1;
        //element ke right side ke sare elements ka product 
        for (int i = n - 2; i > -1; --i)
        {
            right[i] = right[i + 1] * nums[i + 1];
        }
        vector<int> result(n);
        for (int i = 0; i < n; ++i)
        {
            result[i] = left[i] * right[i];
        }
        return result;
    }
};
