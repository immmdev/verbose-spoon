#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> nums(n,vector<int>(2));
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin >> nums[i][j];
        }
    }

    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());

    for(int i=0; i<n; i++){
        if(ans.empty() || ans.back()[1]<nums[i][0]){
            ans.push_back(nums[i]);
        }
        else{
            ans.back()[1]=max(nums[i][1],ans.back()[1]);
        }
    }

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

// Time Complexity O(nlogn+n)
// Space Complexity O(n)