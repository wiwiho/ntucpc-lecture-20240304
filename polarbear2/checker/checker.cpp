#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);

    int T = inf.readInt();
    while(T--){
        int x = inf.readInt();
        int a = ouf.readInt(0, 1000);
        int b = ouf.readInt(0, 1000);
        if(a + b != x) quitf(_wa, "WA");
    }
    quitf(_ok, "AC");

}
