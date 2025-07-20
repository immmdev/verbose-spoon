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
        int start=nums[i][0];
        int end=nums[i][1];
        if(!ans.empty() && end<=ans.back()[1] ) continue; // skipping the merged pairs

        for(int j=i+1; j<n; j++){
            if(end>=nums[j][0]){
                end=max(nums[j][1],end); // merging pairs
            }
            else{
                break;
            }
        }

        ans.push_back({start,end}); // storing merged pair
    }

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

// time complexity o(nlogn+2n)
// space complexity o(n)