#include <bits/stdc++.h>
using namespace std;

int main(){
     int n, target;
    cin >> n;  // Size of array
    int nums[n];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> leader;
    int max=-1;
    for(int i=n-1; i>=0; i--){
        if(nums[i]>max){
            max=nums[i];
            leader.push_back(nums[i]);

        }
    }

    for(int i=0; i<leader.size(); i++){
        cout <<  leader[i] << " ";
    }

}