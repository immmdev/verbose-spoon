#include <bits/stdc++.h>
using namespace std;

int main(){
     int n,k;
    cin >> n >> k;  // Size of array
    int nums[n];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<int,int> mpp;
    // O(n*1,n*n)
    // O(n)
    mpp[0]=1;
    int prefixSum=0, cnt=0;
    for( int i=0; i<n; i++){
        prefixSum+=nums[i];
        int remove=prefixSum-k;
        cnt+=mpp[remove];
        mpp[prefixSum]+=1; // will increase cnt of ps by 1 or add a new key value pair
    }

    cout << cnt << endl;
}

