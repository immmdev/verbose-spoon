#include <bits/stdc++.h>
using namespace std;

// time comlexity o(n)+o(nlogn)
// space complexity o(1)

int main() {
    int n, target;
    cin >> n;  // Size of array
    vector<int> nums(n);
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cin >> target;

    sort(nums.begin(), nums.end());
    int i=0,j=n-1;

    while(i<j){

        if(nums[i]+nums[j]==target){
            cout<<nums[i] << " " << nums[j];
            return 0;
        }
        else if(nums[i]+nums[j]<target){
            i++;
        }

        else if(nums[i]+nums[j]>target){
            j--;
        }


    }
}