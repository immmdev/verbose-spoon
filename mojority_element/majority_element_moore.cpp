// moore's voting algorithm
// initialise the count with 1 and el with nums[0]
// cnt++ if nums[i]==el
// cnt-- if nums[i]!=el
// when the cnt becomes 0, then again cnt initialize with 1, next element at ith position will be el
// then you check whether the el is majority or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin >> n;  // Size of array
    int nums[n];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int cnt=0;
    int el;

    for(int i=0; i<n; i++){
        if(cnt==0){
            cnt=1;
            el=nums[i];
        }

        else if(nums[i]==el){
            cnt++;
        }

        else{
            cnt--;
        }
    }

    int cnt_max=0;
    for(int i=0; i<n; i++){
        if(nums[i]==el){
            cnt_max++;
        }
    }

    if(cnt_max > n/2) {
        cout << el << " ";
        return el;
    }
    cout << "no";
    return -1;

}