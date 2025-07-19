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

    int row[n]={0},col[m]={0};

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(nums[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i]==1 || col[j]==1){
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