#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while(t--) {
        set<pair<long long, long long>> st;
        long long n;
        cin >> n;
        long long ans = 0;
        long long count = 0;
        vector<pair<long long, long long>> ds;
        for(long long i = 0; i < n; i++) {
            long long x, y;
            cin >> x >> y;
            st.insert({x, y});
            ds.push_back({x, y});
        }
        sort(ds.begin(), ds.end());
        for(long long i = 0; i < n - 1; i++) {
            if(ds[i].first == ds[i+1].first) {
                count++;
            }
            if(ds[i].second == 1) {
                long long x1 = ds[i].first - 1;
                long long y1 = 0;
                long long x2 = ds[i].first + 1;
                long long y2 = 0;
                if(st.find({x1, y1}) != st.end() && st.find({x2, y2}) != st.end()) {
                    ans++;
                }
            }
            if(ds[i].second == 0) {
                long long x1 = ds[i].first - 1;
                long long y1 = 1;
                long long x2 = ds[i].first + 1;
                long long y2 = 1;
                if(st.find({x1, y1}) != st.end() && st.find({x2, y2}) != st.end()) {
                    ans++;
                }
            }
        }
        cout << count * (n - 2) + ans << endl;
    }
    return 0;
}
