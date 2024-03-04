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

    vector anc(20, vector<int>(n));
    vector<int> in(n), out(n), dpt(n);
    int cnt = 0;
    auto dfs1 = [&](auto dfs, int now, int p) -> void{
        in[now] = cnt++;
        anc[0][now] = p;
        for(int i : g[now]){
            if(i == p) continue;
            dpt[i] = dpt[now] + 1;
            dfs(dfs, i, now);
        }
        out[now] = cnt++;
    };
    dfs1(dfs1, 0, 0);
    for(int i = 1; i < 20; i++)
        for(int j = 0; j < n; j++)
            anc[i][j] = anc[i - 1][anc[i - 1][j]];

    auto isAnc = [&](int a, int b){
        return in[a] <= in[b] && out[b] <= out[a];
    };
    auto getlca = [&](int a, int b){
        if(isAnc(a, b)) return a;
        for(int i = 19; i >= 0; i--){
            if(!isAnc(anc[i][a], b)) a = anc[i][a];
        }
        return anc[0][a];
    };
    auto getdis = [&](int a, int b){
        int lca = getlca(a, b);
        return dpt[a] + dpt[b] - 2 * dpt[lca];
    };
    
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        cout << getdis(a, b) << "\n";
    }

}
