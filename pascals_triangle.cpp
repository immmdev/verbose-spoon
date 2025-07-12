// 1. given row and column, find the element at that place.
// 2. print any row of the pascals triangle.
// 3. given n point the entire triangle.

#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int res=1;
    for(int i=1; i<=n; i++ ){
        res*=i;
    }

    return res;
}

int ncr(int n,int r){
    int res=1;
    for(int i=0; i<r; i++){
        res=res*(n-i);
        res=res/(i+1);
    }

    return res;
}


int main(){
    // int r ,c; // exact element
    // cin >> r >> c;
    // solution 1. (r-1 C c-1)
    // int el = fact(r-1)/(fact(c-1)*fact(r-c));  // brut
   // take long long

    // int el = (ncr(r-1,c-1))

    // solution 2.
    int n; // no of the row
    cin >> n;
    // int res=1;
    // cout << res << " ";
    // for(int i=1; i<n; i++){
    //     res=res*(n-i);
    //     res=res/i;
    //     cout << res << " "; // print row
    // }

    // solution 3.
    
    for(int i=1; i<=n; i++){
        int res=1;
        cout << res << " ";
        for(int j=1; j<i; j++){
            res=res*(i-j);
            res=res/j;
        }
    }

    // cout << el << endl;
}