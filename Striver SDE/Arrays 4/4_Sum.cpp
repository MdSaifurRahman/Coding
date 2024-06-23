class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<vector<int>> res;
        set<vector<int>> t;
        long long sum;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                int k = j + 1;
                int m = n - 1;
                while (k < m)
                {
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[m];
                    if (sum < target)
                    {
                        k++;
                    }
                    else if (sum == target)
                    {
                        t.insert({nums[i], nums[j], nums[k], nums[m]});
                        k++;
                        m--;
                    }
                    else
                    {
                        m--;
                    }
                }
            }
        }
        for (auto it : t)
        {
            res.push_back(it);
        }
        return res;
    }
};