#include<bits/stdc++.h>
using namespace std;
// Time complexity: O(2 * n * m)
// Space complexity: O(1); in-place matrix manipulation without extra space

int main(){
    int n, m;
    cin >> n >> m;

    // Taking a 2D matrix as input
    vector<vector<int>> nums(n, vector<int>(m));

    // Input the elements of the matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> nums[i][j];
        }
    }

    // To handle collision at nums[0][0], use a separate variable col0 for first column
    int col0 = 1;

    // First pass: mark rows and columns to be zeroed using first row and first column
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(nums[i][j] == 0){
                // Mark current row to be zeroed
                nums[i][0] = 0;

                // Avoid collision with first column element
                if(j != 0){
                    nums[0][j] = 0; // Mark current column to be zeroed
                }
                else{
                    col0 = 0; // Separate flag to handle first column
                }
            }
        }
    }

    // Second pass: update the matrix except first row and first column
    // If the corresponding row or column is marked as 0, set cell to 0
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(nums[i][j] != 0){
                if(nums[0][j] == 0 || nums[i][0] == 0){
                    nums[i][j] = 0;
                }
            }
        }
    }

    // Handle the first row separately if it was marked
    if(nums[0][0] == 0){
        for(int j = 0; j < m; j++){
            nums[0][j] = 0;
        }
    }

    // Handle the first column separately using col0 flag
    if(col0 == 0){
        for(int i = 0; i < n; i++){
            nums[i][0] = 0;
        }
    }

    // Output the final modified matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}
