#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];

    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
        for(int i=0; i<m; i++){
        cin >> arr2[i];
    }

    int left=n-1;
    int right=0;

    while(left>=0 && right<m){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--; right++;

        } 
        else
        {
            break;
        }


    }

    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    for(int i=0; i<n; i++){
        cout << arr1[i] << " ";
    }

    for(int i=0; i<m; i++){
    cout << arr2[i] << " ";
    }

}

// time complexity O(min(n,m))+o(nlogn)+o(mlogm)