#include <iostream>
#include "jngen.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv);
    int T = atoi(argv[1]);
    Array arr;
    for(int i = 0; i < T; i++) arr.emplace_back(i % 2001);
    arr.shuffle();
    cout << T << "\n";
    for(int i : arr) cout << i << "\n";
}
