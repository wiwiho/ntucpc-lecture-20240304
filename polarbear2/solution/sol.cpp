#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int x;
        cin >> x;
        int a = min(x, 1000);
        cout << a << " " << x - a << "\n";
    }
}
