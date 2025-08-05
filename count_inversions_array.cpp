#include <bits/stdc++.h>
using namespace std;

// TC o(nlogn)
// SC o(n)

// Function to merge two sorted subarrays and count inversions
int merge(vector<int> &nums,int low, int mid ,int high){
    vector<int> temp; // temporary array to store merged result

    int left=low; // starting index of left subarray
    int right=mid+1; // starting index of right subarray

    int cnt=0; // to count inversions

    // merge two sorted parts
    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){ // no inversion
            temp.push_back(nums[left]);
            left++;
        }

        else{
            temp.push_back(nums[right]);
            cnt+=(mid-left+1); // updating count as the array is sorted, all the elments right dir will be inverted
            right++;
        }
    }

    // copy remaining elements of left subarray
    while(left<=mid) {
        temp.push_back(nums[left]);
        left++;
    }

    // copy remaining elements of right subarray
    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }

    // copy back to original array
    for(int i=low; i<=high; i++){
        nums[i]=temp[i-low];
    }

    return cnt; // return inversion count for this merge
}

// Function to perform merge sort and count inversions
int mergeSort(vector<int> &nums,int low, int high){
    int cnt=0;
    if(low==high) return cnt; // base case: single element

    int mid=(low+high)/2;

    cnt+=mergeSort(nums,low, mid); // diving left most part
    cnt+=mergeSort(nums,mid+1,high); // diving right most part
    cnt+=merge(nums,low,mid,high); // merging+sorting after diving

    return cnt; // return total inversion count
}

int main(){
    int n;
    cin >> n; // input size of array
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i]; // input array elements
    }

    cout << mergeSort(nums,0,n-1); // output total inversions

}
