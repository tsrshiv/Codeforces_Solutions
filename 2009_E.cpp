#include <bits/stdc++.h>
using namespace std;
long long getSum(long long l, long long r) {
    return (r * (r + 1) / 2) - (l * (l - 1) / 2);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        long long left = k;
        long long right = k + n - 1;
        long long answer = LLONG_MAX;
        while(left <= right) {
            long long mid = (left + right) / 2;
            long long sum1 = getSum(k, mid);
            long long sum2 = getSum(mid + 1, k + n - 1);
            answer = min(answer, abs(sum1 - sum2));
            if(sum1 > sum2) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout << answer << endl;
    }
    
    return 0;
}
