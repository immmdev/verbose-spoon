#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //better brute
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;
    int maxl = 0;
    for(int i=0; i<5; i++){
        int sum=0;
        for(int j=i; j<5; j++){
            sum=arr[j]+sum;
            if(sum==k){
                maxl=max(maxl,j-i+1);
            }
            
        }
    }

    cout << maxl; 
}