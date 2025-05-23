#include <bits/stdc++.h>
using namespace std;
#define int long long
using ldd = long double;
typedef pair<int, int> pii;
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pm cout << "-1\n"
#define po cout << "0\n"

const int MOD1 = 998244353;
const int MOD2 = 1000000007;
const int INF = 1e18;
const int N = 10000;
const int MAXN = 4005;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int calculateTotal(const vector<int>& arr, int w) {
    int total = 0;
    for (int s : arr) {
        total += (s + 2 * w) * (s + 2 * w);
        if (total > 1e18) { 
            return total;
        }
    }
    return total;
}

int32_t main() {
    fastIO();
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int left = 1;
        int right = 1e9; 
        int answer = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int total = calculateTotal(arr, mid);

            if (total == c) {
                answer = mid;
                break;
            } else if (total < c) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        cout << answer << endl;
    }
    return 0;
}
