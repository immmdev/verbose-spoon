#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    int maxProduct=INT_MIN;
    int pre=1;
    int suff=1;

    for(int i=0; i<n; i++){
        // handling 0
        if(suff==0) suff=1;
        if(pre==0) pre=1;

        // general test cases
        pre*=nums[i];
        suff*=nums[n-1-i];
        maxProduct=max(maxProduct,max(pre,suff));
    }

    cout << maxProduct << endl;

}

// TC O(n)
// SC O(1)