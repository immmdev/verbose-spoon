#include <bits/stdc++.h>
using namespace std;

int main() {
    //brute fotce
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;
    int maxl = 0;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i; j < arr.size(); j++) {
            int sum = 0;
            for (int x = i; x <= j; x++) {
                sum += arr[x];
            }
            if (sum == k) {
                maxl = max(maxl, j - i + 1);
            }
        }
    }

    cout << "Maximum length of subarray with sum " << k << " is: " << maxl << endl;
    return 0;
}
