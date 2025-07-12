#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>> nums(n, vector<int>(m));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> nums[i][j];
        }
    }


    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<m; j++){
           
               int temp=nums[i][j];
               nums[i][j]=nums[j][i];
               nums[j][i]=temp;
       
        }
    }

    for(int i=0; i<n; i++){
       reverse(nums[i].begin(), nums[i].end());
    }




    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout <<  nums[i][j] << " ";
        }
        cout << endl;
    }
}