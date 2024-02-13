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
    for(auto &i : arr) cin >> i;
    int ok = INT_MIN;
    int i = 1, temp = 1;
    while(i < n){
        if(arr[i] == arr[i-1]){
            temp++;i++;
        } else{
            break;
        }
    }
    ok = max(ok, temp);
    int j = n - 2;temp = 1;
    while(j >= 0){
        if(arr[j] == arr[j+1]){
            temp++;j--;
        }
        else {
            break;
        }
    }
    if(arr[0] == arr[n-1]) ok += temp;
    ok = max(ok,temp);
    cout << max(0LL,n - ok) << endl;
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
