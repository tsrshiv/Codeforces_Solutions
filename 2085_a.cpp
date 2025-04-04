#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while (t--) {
       int n, k;
       cin >> n >> k;
       string s;
       cin >> s;
       string t= s;
       reverse(t.begin(),t.end());
       set<char> st;
       for (char c : s) {
           st.insert(c);
       }
       bool ans = true;
       if (st.size() <= 1 || (k == 0 && s>=t)) {
           ans = false;
       }
       cout << (ans ? "yes" : "no") << endl;
   }

   return 0;
}
