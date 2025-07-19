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

    for(int i=0; i<n; i++){
        int xorRes=0;
        for(int j=i; j<n; j++){
            xorRes=xorRes^nums[j];
            if(xorRes==target) cnt++;
        }

       
    }

    cout << cnt << endl;

}