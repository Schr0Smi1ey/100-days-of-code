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
bool isValid(int n,int m,int i,int j){
    return (i >= 0 && i < n && j >= 0 && j < m);
}
int drow[] = {0,1,0,-1};
int dcol[] = {-1,0,1,0};
void solution() {
    int n,m;cin >> n >> m;
    char ch;cin >> ch;
    char str[n][m];
    for(int i=0;i<n;i++){
        for(int j = 0;j < m;j++){
            cin >> str[i][j];
        }
    }
    set<char> st;
    for(int i=0;i<n;i++){
        for(int j = 0;j < m;j++){
            if(str[i][j] == ch){
                for(int k = 0;k < 4;k++){
                    int x = i + drow[k],y = j + dcol[k];
                    if(isValid(n,m,x,y) && str[x][y] != '.' && str[x][y] != ch){
                        st.insert(str[x][y]);
                    }
                }
            }
        }
    }
    cout << st.size();
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
