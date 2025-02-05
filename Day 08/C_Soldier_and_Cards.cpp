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
    int k1;cin >> k1;
    deque<int> dq1(k1);
    for(int i=0;i<k1;i++){
        cin >> dq1[i];
    }
    int k2;cin >> k2;
    deque<int> dq2(k2);
    for(int i=0;i<k2;i++){
        cin >> dq2[i];
    }
    int flag = 0;
    while(flag <= 1e5){
        if(dq1.size() == 0){
            cout << flag <<  " " << 2;
            return;
        }
        if(dq2.size() == 0){
            cout << flag << " " << 1;
            return;
        }
        int a = dq1.front(),b = dq2.front();
        dq1.pop_front();
        dq2.pop_front();
        if(a > b){
            dq1.push_back(b);
            dq1.push_back(a);
        }
        else if(b > a){
            dq2.push_back(a);
            dq2.push_back(b);
        }
        flag++;
    }
    cout << -1 << endl;
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

