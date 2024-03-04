#include <bits/stdc++.h>

using namespace std;

#define pb emplace_back

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    vector<int> par(n), dpt(n);
    auto dfs1 = [&](auto dfs, int now, int p) -> void{
        par[now] = p;
        for(int i : g[now]){
            if(i == p) continue;
            dpt[i] = dpt[now] + 1;
            dfs(dfs, i, now);
        }
    };
    dfs1(dfs1, 0, 0);
    auto getdis = [&](int a, int b){
        int ans = 0;
        while(a != b){
            if(dpt[a] < dpt[b]) swap(a, b);
            ans++;
            a = par[a];
        }
        return ans;
    };
    
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        cout << getdis(a, b) << "\n";
    }

}
