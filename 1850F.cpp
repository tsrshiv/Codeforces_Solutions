#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> freq(n + 1, 0);
    for (int num : a) {
        if (num <= n) {
            freq[num]++;
        }
    }

    vector<int> count(n + 1, 0);
    for (int a_val = 1; a_val <= n; ++a_val) {
        if (freq[a_val] == 0) continue;
        for (int multiple = a_val; multiple <= n; multiple += a_val) {
            count[multiple] += freq[a_val];
        }
    }

    int max_frogs = *max_element(count.begin() + 1, count.end());
    cout << max_frogs << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
