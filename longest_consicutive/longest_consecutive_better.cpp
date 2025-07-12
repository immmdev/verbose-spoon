#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={102,4,100,1,101,3,2,1,1};
    int n=nums.size();
    int lastSmallest=INT_MIN;
    sort(nums.begin(), nums.end());
    int cnt=0;
    int longest=1;
    for(int i=0; i<n; i++){
        if(nums[i]-1==lastSmallest){
            cnt++;
            lastSmallest=nums[i];
        }

        else if(nums[i]==lastSmallest) continue;
        

        else if(lastSmallest != nums[i]){
            cnt=1;
            lastSmallest=nums[i];
        }

        longest=max(longest,cnt);
    }

    cout << longest << endl;
    }