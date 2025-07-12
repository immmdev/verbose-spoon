#include <bits/stdc++.h>
using namespace std;
// time complexity o(n)
// space complexity o(n)
int main()
{
    int n, target;
    cin >> n; // Size of array
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int ans[n];
    int neg=1;
    int pos=0;
    for(int i=0; i<n; i++){
        if(nums[i]>=0){
            ans[pos]=nums[i];
            pos+=2;
        }

        else {
            ans[neg]=nums[i];
            neg+=2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;

}