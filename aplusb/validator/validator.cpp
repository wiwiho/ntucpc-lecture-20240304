#include "testlib.h"
using namespace std;

int main(int argc, char *argv[]) {
    int C = atoi(argv[1]);
	registerValidation();
    inf.readInt(1, C, "A");
    inf.readSpace();
    inf.readInt(1, C, "B");
	inf.readEoln();
	inf.readEof();
	return 0;
}
