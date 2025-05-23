#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> x_cnt, y_cnt, diag1, diag2;
        
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            x_cnt[x]++;
            y_cnt[y]++;
            diag1[x - y]++;
            diag2[x + y]++;
        }
        
        int res = 0;
        for (auto it : x_cnt) res += it.second * (it.second - 1) / 2;
        for (auto it : y_cnt) res += it.second * (it.second - 1) / 2;
        for (auto it : diag1) res += it.second * (it.second - 1) / 2;
        for (auto it : diag2) res += it.second * (it.second - 1) / 2;
        
        cout << res * 2 << endl;
    }
    return 0;
}
