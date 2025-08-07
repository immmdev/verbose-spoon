#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;  // Size of array
    int nums[n];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    map<int,int> mpp; // log(n) time complexity
    list<int> ans;
    int mm=(n/3)+1;

    for(int i=0; i<n; i++){ // o(n) time complexity
        mpp[nums[i]]++;
        if(mpp[nums[i]]==mm){
            ans.push_back(nums[i]);
        }
    }

    for( int i : ans){
        cout << i << " ";
    }
    // space complexity o(n)
    // time complexity o(n)*log(n)

}