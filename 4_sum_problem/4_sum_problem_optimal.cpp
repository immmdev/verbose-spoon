#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;  // Input the size of the array

    vector<int> nums(n); // Declare vector to hold n integers

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i]; // Input array elements
    }

    // Sort the array to make two-pointer technique possible
    sort(nums.begin(), nums.end());

    long long target;
    cin >> target; // Input the target sum

    vector<vector<int>> ans; // To store the result quadruplets

    // Outer loop for the first element
    for (int i = 0; i < n; i++)
    {
        // Skip duplicates for the first element
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        // Loop for the second element
        for (int j = i + 1; j < n; j++)
        {
            // Skip duplicates for the second element
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int k = j + 1;     // Start of third pointer
            int l = n - 1;     // End of fourth pointer

            // Two-pointer approach to find remaining two elements
            while (l > k)
            {
                // Calculate the sum of four elements
                long long sum = nums[i] + nums[j] + nums[k] + nums[l];

                if (sum > target)
                {
                    // If sum is too big, move 'l' leftward to decrease sum
                    l--;
                }
                else if (sum < target)
                {
                    // If sum is too small, move 'k' rightward to increase sum
                    k++;
                }
                else
                {
                    // Found a valid quadruplet
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);

                    // Move both pointers inward
                    k++;
                    l--;

                    // Skip duplicates for 'l'
                    while (l > k && nums[l] == nums[l + 1])
                        l--;

                    // Skip duplicates for 'k'
                    while (l > k && nums[k] == nums[k - 1])
                        k++;
                }
            }
        }
    }

    // Print all unique quadruplets
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// time complexity O(n^2 * n) + nlog(n)
// space complexity O(no. of unique quads) only using space for returning the anser not for for solving the problem