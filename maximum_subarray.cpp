#include <bits/stdc++.h>
using namespace std;

int main(){
     int n, target;
    cin >> n;  // Size of array
    int nums[n];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    long long sum=0,sumMax=LONG_LONG_MIN;
    for(int i=0; i<n; i++){
        sum+=nums[i];

        if(sum>sumMax){
            sumMax=sum;
        }

        if(sum<0){
            sum=0;
        }
    }

    if(sumMax>=0){
        cout << sumMax << " ";
        return sumMax;
    }
    else{
        cout << sumMax << " ";
        return 0;
    }


}