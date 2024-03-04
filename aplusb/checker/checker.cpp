#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerChecker("aplusb", argc, argv);
	compareRemainingLines();
}
