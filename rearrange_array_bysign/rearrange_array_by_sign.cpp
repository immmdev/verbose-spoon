#include <bits/stdc++.h>
using namespace std;

// tc o(n) + o(max(pos,neg)) + o(left)
// o(2n)
int main()
{
    int n, target;
    cin >> n; // Size of array
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 0)
            pos.push_back(nums[i]);
        else
            neg.push_back(nums[i]);
    }

    int n1 = neg.size();
    int p1 = pos.size();

    if (p1 > n1)
    {
        for (int i = 0; i < n1; i++)
        {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }
        int index = n1 * 2;
        for (int i = n1; i < p1; i++)
        {
            nums[index] = pos[i];
            index++;
        }
    }

    else
    {
        for (int i = 0; i < p1; i++)
        {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }
        int index = p1 * 2;
        for (int i = p1; i < n1; i++)
        {
            nums[index] = pos[i];
            index++;
        }
    }

    // if n amd p are equal tc=n +n/2
    // for (int i = 0; i < n / 2; i++)
    // {
    //     nums[i * 2] = pos[i];
    //     nums[i * 2 + 1] = neg[i];
    // }

    for (int i = 0; i < n; i++)
    {

        cout << nums[i] << " ";
    }
}
