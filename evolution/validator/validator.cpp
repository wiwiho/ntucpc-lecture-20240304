#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

#define pb emplace_back

int main(int argc, char *argv[]){
	registerValidation();

    int maxn = atoi(argv[1]);
    int maxm = atoi(argv[2]);

    int n = inf.readInt(1, maxn, "n");
    inf.readSpace();
    int m = inf.readInt(1, maxm, "m");
    inf.readEoln();
    
    vector<vector<int>> g(n);
    for(int i = 0; i < n - 1; i++){
        int u = inf.readInt(0, n - 1, "u");
        inf.readSpace();
        int v = inf.readInt(0, n - 1, "v");
        inf.readEoln();
        g[u].pb(v);
        g[v].pb(u);
    }
    queue<int> q;
    vector<bool> vst(n);
    q.push(0);
    vst[0] = true;
    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(int i : g[now]){
            if(vst[i]) continue;
            vst[i] = true;
            q.push(i);
        }
    }
    for(int i = 0; i < n; i++) ensuref(vst[i], "not tree");

    for(int i = 0; i < m; i++){
        inf.readInt(0, n - 1, "a");
        inf.readSpace();
        inf.readInt(0, n - 1, "b");
        inf.readEoln();
    }
    inf.readEof();

	return 0;
}
