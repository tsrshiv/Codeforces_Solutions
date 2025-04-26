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
       int n,x;
       cin>>n>>x;
       if(n==x){
           for(int i=0;i<n;i++){
               cout<<i<<" ";
           }
       }
       else{
           for(int i=0;i<n;i++){
             if(i!=x){
                 cout<<i<<" ";
             }  
           }
           cout<<x;
       }
       cout<<endl;
    }
    return 0;
}
