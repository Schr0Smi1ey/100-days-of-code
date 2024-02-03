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
    int n,m;cin >> n >> m;
    vector<pair<int,int>> v(m);
    for(int i=0;i<m;i++){
        cin >> v[i].first >> v[i].second;
        swap(v[i].first,v[i].second);
    }
    sort(v.rbegin(),v.rend());
    int ans = 0;
    for(int i=0;i<m;i++){
        ans += min(n,v[i].second)*v[i].first;
        n -= min(n,v[i].second);
        if(n == 0)break;
    }
    cout << ans;
}

int32_t main() {
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
