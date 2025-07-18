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

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                for(int l=k+1; l<n; l++){
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k];
                    sum+=nums[l];

                    if(sum==target){
                        vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
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

// timecomlexity:- O(n4)
// space complexity:- O(no. of unique triplets)