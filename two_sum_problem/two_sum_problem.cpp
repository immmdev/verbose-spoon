#include <bits/stdc++.h>
using namespace std;

int main(){
    // brute
    int arr[5]={2,6,5,8,11};
    int k=14;
    int f=0,s=0;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i]+arr[j]==k)
            {
                cout << i << endl << j ;
                return i,j;
            }
        }
    }

   
    
    

}