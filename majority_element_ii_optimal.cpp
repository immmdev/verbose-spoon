#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;  // Size of array
    int nums[n];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int mm=(n/3)+1;
    int cnt1=0,cnt2=0;
    int el1,el2;
    for(int i=0; i<n; i++){
        if(cnt1==0 && el2!=nums[i]){
            cnt1=1;
            el1=nums[i];
        }

        else if(cnt2==0 && el1!=nums[i]){
            cnt2=1;
            el2=nums[i];
        }

        else if(el1==nums[i]){
            cnt1++;
        }

        else if(el2==nums[i]){
            cnt2++;
        }

        else{
            cnt1--;
            cnt2--;
        }
    }
    
    cnt1=cnt2=0;

    for(int i=0; i<n; i++){
        if(nums[i]==el1) cnt1++;
        else if(nums[i]==el2) cnt2++;

    }

    if(cnt1>n/3) cout << el1 << " ";
    if(cnt2>n/3) cout << el2 << " ";

    // time complexity o(2n)
    // space complexity o(1) approx.
}