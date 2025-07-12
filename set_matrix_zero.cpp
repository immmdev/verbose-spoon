#include<bits/stdc++.h>
using namespace std;


// brute force
int markZeroRow(int i, int m, vector<vector<int>>& nums ){
    for(int j=0; j<m; j++){
        if(nums[i][j] != 0){
            nums[i][j]=-1;
        }
    }

    return 0;

}

int markZeroCol(int j, int n, vector<vector<int>>& nums ){
    for(int i=0; i<n; i++){
        if(nums[i][j] != 0){
            nums[i][j]=-1;
        }
    }

    return 0;

}

// time complexity approx. o(n*n*n)

int main(){

    int n,m;
    cin >> n;
    cin >> m;

    vector<vector<int>> nums(n, vector<int>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> nums[i][j];
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(nums[i][j]==0){
                markZeroRow(i,m,nums);
                markZeroCol(j,n,nums);
            }
        }
    }

    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(nums[i][j]==-1){
                nums[i][j]=0;
            }
        }
    }

    



    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << nums[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}


