#include<bits/stdc++.h>
using namespace std;

int  main(){
    int n;
    cin >> n;  // Size of array
    int nums[n];
    set<vector<int>> st;
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> temp ={nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
}

// O(n3.log(no. of triplet)) time complexity
// space complexity O(no of triplet)