#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, target;
    cin >> n;  // Size of array
    int nums[n];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    map<int,int> hash;

    for(int i=0; i<n; i++){
        hash[nums[i]]++;
    }

    for(auto it : hash){
        if(it.second>n/2){
            cout << it.first << " ";
            return 0;
        }


    }

    cout << "none";

    return -1;

}