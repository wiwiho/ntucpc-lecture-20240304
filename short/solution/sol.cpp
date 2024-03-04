#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<bool> use(n + 1);
    int now = 1;
    int lst = 0;
    for(int i = 1; i <= n; i++){
        int b;
        cin >> b;
        use[b] = true;
        if(b > lst) cout << b << " \n"[i == n];
        else{
            while(use[now]) now++;
            cout << now << " \n"[i == n];
            use[now] = true;
        }
        lst = b;
    }

}
