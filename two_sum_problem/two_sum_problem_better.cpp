#include <bits/stdc++.h>
using namespace std;

// time commplexity O(n*logn) ordered map space complexity O(n)
// time commplexity best and average O(n) worst o(n^2) unordered_map space complexity O(n)
//  optimal approch for returning indices



int main() {
    int n, target;
    cin >> n;  // Size of array
    vector<int> nums(n);
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cin >> target;

    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        int a = nums[i];
        int more = target - a;

        auto it = mpp.find(more);
        if(it != mpp.end()) {
            cout << it->second << " " << i << endl;
            return 0;
        }

        mpp[a] = i;
    }

    cout << "-1 -1" << endl; 
    return 0;
}
