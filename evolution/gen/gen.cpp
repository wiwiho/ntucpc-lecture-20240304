#include <iostream>
#include "jngen.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv);

    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    int elo = atoi(argv[3]);

    auto tree = Tree::randomPrim(n, elo).shuffled();
    cout << n << " " << m << "\n";
    cout << tree;
    if(n > 1) cout << "\n";
    for(int i = 0; i < m; i++){
        int a = rnd.next(0, n - 1);
        int b = rnd.next(0, n - 1);
        cout << a << " " << b << "\n";
    }

}
