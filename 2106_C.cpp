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

int32_t main() {
    fastIO();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        
        set<int> st;
        for(int i = 0; i < n; i++) {
            if(a[i] >= 0 && b[i] >= 0) {
                st.insert(a[i] + b[i]);
            }
        }
        
        if(st.empty()) {
            int max_a = *max_element(a.begin(), a.end());
            int min_a = *min_element(a.begin(), a.end());
            cout << max(0LL, min_a + k - max_a + 1) << endl;
        }
        else if(st.size() == 1) {
            int sum = *st.begin();
            bool valid = true;
            for(int num : a) {
                if(num > sum || num+k<sum) {
                    valid = false;
                    break;
                }
            }
            cout << (valid ? 1 : 0) << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    return 0;
}
