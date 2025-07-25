#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; //Size of array
    vector<int> nums(n); // Declare vector with size n
   

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i]; // Input the array elements
    }

    long long target;
    set<vector<int>> st;
    cin >> target;

    set<long long> hashset;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                int sum=nums[i]+nums[j];
                sum+=nums[k];
                int fourth=target-sum;
                if(hashset.find(fourth)!=hashset.end()){
                    vector<int> temp={nums[i],nums[j],nums[k],fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }

                hashset.insert(nums[k]);
            }
        }
    }

    vector<vector<int>> ans(st.begin(),st.end());
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }
}

// time complexity:- o(n^3*log(m))
// space complexity:- o(n)+o(no. of unique qads)