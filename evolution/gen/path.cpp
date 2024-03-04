#include <iostream>
#include "jngen.h"
using namespace std;
#define pb emplace_back
using pii = pair<int, int>;

int main(int argc, char* argv[]) {
	registerGen(argc, argv);

    int n = atoi(argv[1]);
    int m = atoi(argv[2]);

    Arrayp e;
    for(int i = 0; i < n - 1; i++) e.pb(pii(i, i + 1));
    e.shuffle();

    cout << n << " " << m << "\n";
    for(auto [u, v] : e) cout << u << " " << v << "\n";
    for(int i = 0; i < m; i++){
        cout << 0 << " " << n - 1 << "\n";
    }

}
