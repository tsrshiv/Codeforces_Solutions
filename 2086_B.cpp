#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;
        vector<int> arr(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if (x > sum * k) {
            cout << 0<<endl;;
            continue;
        }
        long long xm = x % sum;
        long long q = x / sum;
        if (xm == 0) {
            q--;
            xm = sum;
        }
        long long ans = 1LL * n * k - q * n;
        long long suf = 0;
        for (int i = n - 1; i >= 0; i--) {
            suf += arr[i];
            if (suf >= xm) break;
            ans--;
        }

        cout << ans << endl;
    }
    return 0;
}
