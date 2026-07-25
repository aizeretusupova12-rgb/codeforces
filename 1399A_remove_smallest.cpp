#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    for (long long i = 0; i < n; i++) {
        bool pos=true; 
        long long a;
        cin >> a;

        vector<long long> nums(a);

        for (long long j = 0; j < a; j++) {
            cin >> nums[j];
        }

        sort(nums.begin(), nums.end());

        int m = 0;

        while (m + 1 < nums.size()) {
            if (abs(nums[m] - nums[m + 1]) == 1 || abs(nums[m] - nums[m + 1]) == 0) {
                pos = true; 
            } else {
                pos = false; 
                break;
                
            }

            m++;
        }

        if (pos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}