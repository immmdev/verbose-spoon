#include <bits/stdc++.h>
using namespace std;

// dutch natinal flag algo
// [0,1,1,0,2,1,0,2,1,0]

// make three pointers low mid high
// array divided into four parts
// 0 to low-1 -> 0
// low to mid-1 -> 1
// mid to high -> unsorted
// high+1 to n-1 -> 2

// initially low and mid at 0 high at n-1
// if a[mid]==0 swap(a[low],a[mid]) low++ mid++;
// if a[mid]==1 mid++;
// if a[mid]==2 swap(a[mid],a[high]) high--;
// time complexity o(n) space complexity o(1)


int main(){
     int n, target;
    cin >> n;  // Size of array
    int nums[n];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int low=0, mid=0, high=n-1;
    while(high>=mid){
        if(nums[mid]==0){
            int temp=nums[mid];
            nums[mid]=nums[low];
            nums[low]=temp;

            mid++;
            low++;
        }

        else if(nums[mid]==1) mid++;

        else{
            int temp=nums[mid];
            nums[mid]=nums[high];
            nums[high]=temp;
            high--;
        }
    }
    
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }


    return 0;

}