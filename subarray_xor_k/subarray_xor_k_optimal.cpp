#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; //Size of array
    vector<int> nums(n); // Declare vector with size n
   

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i]; // Input the array elements
    }

    int target;

    cin >> target;

    int cnt=0;

    map<int,int> hashmp;
    int xorRes=0;
    hashmp[xorRes]++;

    for(int i=0; i<n; i++){
        xorRes=xorRes^nums[i];
        int x=xorRes^target;
        cnt=cnt+hashmp[x];
        hashmp[x]++;
  
    }

    cout << cnt << " ";

}

// time complexity O(nlogn)
// space time complexity O(n)

