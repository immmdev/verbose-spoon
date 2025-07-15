#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // Size of array
    vector<int> nums(n); // Declare vector with size n
    vector<vector<int>> ans; // To store the result triplets

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i]; // Input the array elements
    }

    sort(nums.begin(), nums.end()); // Sort the array to use two-pointer approach

    for (int i = 0; i < n; i++)
    {
        // Skip duplicate elements to avoid duplicate triplets
        if (i > 0 && nums[i - 1] == nums[i]) continue;

        int j = i + 1; // Start pointer
        int k = n - 1; // End pointer

        // Two-pointer approach
        while (k > j)
        {
            int sum = nums[i] + nums[j] + nums[k]; // Calculate the triplet sum

            if (sum > 0)
            {
                k--; // Sum too big, decrease end pointer
            }
            else if (sum < 0)
            {
                j++; // Sum too small, increase start pointer
            }
            else
            {
                // Valid triplet found
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp); // Store the triplet
                j++;
                k--;

                // Skip duplicates for second and third elements
                while (k > j && nums[j] == nums[j - 1])
                    j++;
                while (k > j && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }

    // Output all found triplets
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

// time complexity O(nlogn+n^2)
// space complexity O(no. of unique triplet)