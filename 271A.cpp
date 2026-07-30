#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;

        string year = to_string(y);
        bool beautiful = true;

        for (int i = 0; i < year.size(); i++) {
            for (int j = i + 1; j < year.size(); j++) {
                if (year[i] == year[j]) {
                    beautiful = false;
                }
            }
        }

        if (beautiful) {
            cout << y;
            break;
        }
    }

    return 0;
}