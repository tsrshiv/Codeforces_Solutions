#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string p, s;
        cin >> p >> s;

        vector<pair<char, pair<int, int>>> ds, ds2;
        int i = 0, j = 0;
        while (i < p.size()) {
            j = i;
            while (j < p.size() && p[j] == p[i]) j++;
            ds.push_back({p[i], {i, j - 1}});
            i = j;
        }

        i = 0, j = 0;
        while (i < s.size()) {
            j = i;
            while (j < s.size() && s[j] == s[i]) j++;
            ds2.push_back({s[i], {i, j - 1}});
            i = j;
        }

        bool ans = true;
        if (ds.size() != ds2.size()) ans = false;
        else {
            for (int i = 0; i < ds.size(); i++) {
                char c1 = ds[i].first;
                int len1 = ds[i].second.second - ds[i].second.first + 1;
                char c2 = ds2[i].first;
                int len2 = ds2[i].second.second - ds2[i].second.first + 1;

                if (c1 != c2 || len2 < len1 || len2 > 2 * len1) {
                    ans = false;
                    break;
                }
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}
