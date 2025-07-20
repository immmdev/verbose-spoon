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

    long long target;

    cin >> target;

    int cnt=0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int xorRes=0;
            for(int k=i; k<=j; k++){
                xorRes=xorRes^nums[k];
            }
            if(xorRes==target){
                    cnt++;
            }
        }
    }

    cout << cnt << " ";
}


// time complexity O(n3)