#include<bits/stdc++.h>
using namespace std;

int  main(){
    int n;
    cin >> n;  // Size of array
    int nums[n];
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // used to store triplet o(no. of triplet)
    set<vector<int>> st;

    for(int i=0; i<n; i++){
        // o(log(m)) m is varying.
        set<int> hashset; // reinitialising hashset on each i.
        for(int j=i+1; j<n; j++){
            int third=-(nums[i]+nums[j]);
            if(hashset.find(third) != hashset.end()){
                vector<int> temp={nums[i],nums[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }

    // creating and iterating ans
    vector<vector<int>> ans(st.begin(),st.end());
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j]<<" ";
        }
        cout << endl;
    }
}

// time complexity O(n^2*log(m))
// space complexity O(O(n)+O(no. of triplets)*2)