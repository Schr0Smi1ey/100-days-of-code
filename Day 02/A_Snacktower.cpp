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
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k = n;
    priority_queue<int> pq;
    for(int i = 0;i<n;i++){
        pq.push(arr[i]);
        while(!pq.empty() && pq.top() == k){
            cout << k << " ";
            k--;pq.pop();
        }
        cout << endl;
    }
}

int32_t main() {
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    // cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
