#include <bits/stdc++.h>
using namespace std;

// Global counter for reverse pairs
int cnt = 0;

// Merge two sorted subarrays and count normal inversions
int merge(vector<int> &nums, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    int count = 0;

    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp.push_back(nums[left++]);
        } else {
            temp.push_back(nums[right++]);
            count += (mid - left + 1);  // count normal inversions
        }
    }

    while (left <= mid) temp.push_back(nums[left++]);
    while (right <= high) temp.push_back(nums[right++]);

    for (int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }

    return count;
}

// Count reverse pairs: nums[i] > 2 * nums[j] where i < j
void pairAlgo(vector<int> &nums, int low, int mid, int high) {
    int right = mid + 1;
    for (int i = low; i <= mid; i++) {
        while (right <= high && nums[i] > 2LL * nums[right]) {
            right++;
        }
        cnt += (right - (mid + 1));
    }
}

// Modified merge sort to count inversions and reverse pairs
int mergeSort(vector<int> &nums, int low, int high) {
    if (low >= high) return 0;

    int mid = (low + high) / 2;
    int count = 0;
    
    count += mergeSort(nums, low, mid);
    count += mergeSort(nums, mid + 1, high);
    
    pairAlgo(nums, low, mid, high);  // count reverse pairs
    count += merge(nums, low, mid, high); // count normal inversions

    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int inversions = mergeSort(nums, 0, n - 1);
    cout << "Inversions: " << inversions << "\n";
    cout << "Reverse Pairs: " << cnt << "\n";

    return 0;
}
