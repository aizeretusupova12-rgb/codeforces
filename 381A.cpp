#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0;
    int right = n - 1;
    int turn = 0;

    int sereja = 0;
    int dima = 0;

    while (left <= right) {
        int chosen;

        if (a[left] > a[right]) {
            chosen = a[left];
            left++;
        } else {
            chosen = a[right];
            right--;
        }

        if (turn % 2 == 0) {
            sereja += chosen;
        } else {
            dima += chosen;
        }

        turn++;
    }

    cout << sereja << ' ' << dima;

    return 0;
}