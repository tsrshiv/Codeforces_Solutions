#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n == 2 || n == 3) return true;
    if (n <= 1 || n % 2 == 0 || n % 3 == 0) return false; 
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool solve() {
    int x, k;
    cin >> x >> k;
    if (x > 1 && k > 1) {
        return false;
    }
    if (k == 1) {
        return isPrime(x);
    }
    assert(x == 1);  
    string s(k, '1');  
    int num = stoi(s); 
    return isPrime(num);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        if (solve()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
