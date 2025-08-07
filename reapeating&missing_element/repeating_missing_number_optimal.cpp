#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >>  n;
    int nums[n];

    long long sn=(n*(n+1))/2; // sum n natural no
    long long s2n=(n*(n+1)*(2*n+1))/6; // sum of sqaure of n natural no

     // Taking input
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    long long s=0;
    long long s2=0;
    for(int i=0; i<n; i++){
        s+=nums[i];
        s2+=(long long)nums[i]*(long long)nums[i];
    }

    long long val1=s-sn; // x-y
    long long val2=s2-s2n; // x2-y2
    val2=(val2/val1); //x+y

    long long x=(val1+val2)/2; // missing
    long long y=val2-x; // repeating

    cout << x << endl;
    cout << y << endl;
   
}

// tc o(n)
// sc o(1)