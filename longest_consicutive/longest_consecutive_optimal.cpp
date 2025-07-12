#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={102,4,100,1,101,3,2,1,1};
    int n=nums.size();

    unordered_set<int> st;

    int longest=0;

    for(int i=0; i<n; i++){
        st.insert(nums[i]); // o(1)
    }

    for(auto it: st){
        if(st.find(it-1)==st.end()){ // time complexity neartly o(2n)
            int cnt=1; // space complexity o(n)
            int x=it;
            while(st.find(x+1) != st.end()){
                cnt++;
                x=x+1;
            }

            longest=max(longest,cnt);
        }
    }

    cout << longest << endl;

}