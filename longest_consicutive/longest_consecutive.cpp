#include <bits/stdc++.h>
using namespace std;

bool exists(vector<int> &nums, int target) {
    for (int num : nums) {
        if (num == target) return true;
    }
    return false;
}

// n*n
// 1
int main(){
  // Size of array
    vector<int> nums={102,4,100,1,101,3,2,1,1};
    
    int n=nums.size();
    
    int longest=0;
    for(int i=0; i<n; i++){
        int cnt=1;
        int el=nums[i];
        int j=0;
        while(exists(nums,el+1)){
            el+=1;
            cnt++;
           
            
        };
         longest=max(longest,cnt);
    }

    cout << longest << endl;
    return 0;

}