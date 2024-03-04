#include "testlib.h"
using namespace std;

int main() {
	registerValidation();
    int T = inf.readInt(1, 10000, "T");
    inf.readEoln();
    while(T--)
        inf.readInt(0, 2000, "x"), inf.readEoln();
    inf.readEof();
	return 0;
}
