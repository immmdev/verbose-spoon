// longest prefix match a[i]<a[i+1]
// find > A, but be smallest one so that u stay close
// try to place in sorted order 
// start tracking fromm back
// time complexity o(3n)
// space complexity o(1)

#include <bits/stdc++.h>
using namespace std;

int main(){
     int n;
    cin >> n;  // Size of array
    int nums[n];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int index=-1;
    for(int i=n-2; i>=0; i--){
        if(nums[i] < nums[i+1]){
            index=i;
            break;
        }
    }

    if(index==-1){
        int start1=0;
    int end1=n-1;
    if(index==-1){
        while(start1<end1){
        int temp=nums[start1];
        nums[start1]=nums[end1];
        nums[end1]=temp;
        start1++;
        end1--;

    }
    }
    }
    
    else{
        for(int i=n-1; i>index; i--){
        if(nums[index]<nums[i]){
            int temp=nums[i];
            nums[i]=nums[index];
            nums[index]=temp;
            break;
        }

    }
    int start=index+1;
    int end=n-1;
   while(start<end){
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }

    }
    
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }

    return 0;
}