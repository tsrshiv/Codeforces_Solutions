#include <iostream>
#include <algorithm> 
 
using namespace std;
 
int main() {
    long long t;
    cin >> t;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
 
        if (x == y) {
            cout << -1 << endl;
        } 
        else {
            long long har = max(x, y);
            long long val = 1;
 
            while (val < har) {
                val *= 2;
            }
 
            cout << val - har << endl;
        }
    }
 
    return 0;
}
