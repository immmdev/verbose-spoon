#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // Taking a 2D matrix as input
    vector<vector<int>> nums(n, vector<int>(m));

    // Input the elements of the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> nums[i][j];
        }
    }

    vector<int> ans;
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;

    while (left <= right && bottom >= top)
    {

        for (int i = left; i <= right; i++)
        {
            ans.push_back(nums[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(nums[i][right]);
        }

        right--;
        if (bottom >= top)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(nums[bottom][i]);
            }
        }

        bottom--;

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(nums[i][left]);
            }
        }

        left++;
    }

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}