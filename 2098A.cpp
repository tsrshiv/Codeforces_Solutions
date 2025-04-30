#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string ans;
        map<int, int> mp;  
        for (char c : s) {
            int a = c - '0';
            mp[a]++;
        }    
        for(int i=9;i>=0;i--) {
            auto it = mp.lower_bound(i); 
            ans.push_back(it->first + '0');  
            it->second--;
            if (it->second == 0) {
                mp.erase(it);
            }
        }      
        cout << ans << endl;
    }
    return 0;
}
