#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];
    int arr3[n+m];

    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
        for(int i=0; i<m; i++){
        cin >> arr2[i];
    }

    int left=0;
    int right=0;
    int index=0;

    while(left<n && right<m){

        if(arr1[left]<=arr2[right]){
            arr3[index]=arr1[left];
            left++; index++;
        }

        else{
            arr3[index]=arr2[right];
            right++; index++;
        }
    }

    while(left<n){
        arr3[index++]=arr1[left++];
    }

    while(right<m){
    arr3[index++]=arr2[right++];
    }

    for(int i=0; i<(n+m); i++){
        if(i<n){
            arr1[i]=arr3[i];
        }
        else{
            arr2[i-n]=arr3[i];
        }
    }
    
    
    return 0;
}

