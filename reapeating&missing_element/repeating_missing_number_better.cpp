#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >>  n;
    int nums[n];

     // Taking input
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }


    int repeating=-1;
    int missing=-1;

    int hash[n+1]={0};

    for (int i=0; i<n; i++){
        hash[nums[i]]++;
    }

    for(int i=1; i<=n; i++){
        if(hash[i]==2) repeating=i;
        else if(hash[i]==0) missing=i;
        if(missing !=-1 && repeating !=-1){
            break;
        }
    }
    
    cout << repeating << endl;
    cout << missing << endl;


}

// TC O(2n)
// SC O(n)