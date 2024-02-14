#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
        tree_order_statistics_node_update>;
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,x,y;cin >> n >> x >> y;
    map<pair<int,int>,int> mp;
    for(int i = 0,z;i < n;i++){
        cin >> z;
        mp[{z % x,z % y}]++;
    }
    int ans = 0;
    // The beautiful pairs(a,b) are those (a % x + b % y == x && (a % y == b % y))
    for(auto &p : mp){
        auto need = make_pair(x - p.first.first, p.first.second);
        int flag = p.second;
        if(flag){
            if(p.first.first == 0){
                ans += (flag*(flag-1))/2;
                mp[p.first] = 0;continue;
            }
            if(mp.find(need) != mp.end() && mp[need]){
                if(need == p.first){
                    ans += (flag*(flag-1))/2;
                    mp[p.first] = 0;
                }
                else{
                    ans += (flag*mp[need]);
                    mp[p.first] = 0;
                    mp[need] = 0;
                }
            }
        }
    }
    cout << ans << endl;
}

int32_t main() {
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
