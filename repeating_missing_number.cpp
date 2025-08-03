#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >>  n;
    int nums[n];

    int repeating=-1;
    int missing=-1;

    // Taking input
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // checking array
    for(int i=1; i<=n; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(nums[j]==i){
                cnt++;
            }
        }

        // repeating
        if(cnt==2){
            repeating=i;
        }

        // missing 
        else if(cnt==0){
            missing=i;
        }

        if(missing !=-1 && repeating !=-1){
            break;
        }
    }

    cout << missing << endl;
    cout << repeating << endl;

}

// TC=O(n2) SC=O(1)