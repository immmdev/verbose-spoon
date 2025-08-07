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

    // max sum product algorithm
    for(int i=0; i<n; i++){
        int product=1;
        for(int j=i; j<n; j++){
            product*=nums[j];
            maxProduct=max(maxProduct,product);  
        }
    }

    cout << maxProduct << endl;
}

// TC O(n2)
// SC O(1)