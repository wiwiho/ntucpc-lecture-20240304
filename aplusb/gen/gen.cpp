#include <iostream>
#include "jngen.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv);
    int C = atoi(argv[1]);
    int a = rnd.next(1, C);
    int b = rnd.next(1, C);
    cout << a << " " << b << "\n";
}
