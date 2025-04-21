#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char> > a(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        int r = 0, c = 0, count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '#') {
                    r += i + 1;
                    c += j + 1;
                    count++;
                }
            }
        }

        if (count == 0) {
            cout << "0 0" << endl;
        } else {
            cout << r / count << " " << c / count << endl;
        }
    }
    return 0;
}
