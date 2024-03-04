#include "testlib.h"

#include <bits/stdc++.h>

using namespace std;

int main() {
	registerValidation();
    
    int n = inf.readInt(1, 100000, "n");
    inf.readEoln();

    int lst = 0;
    for(int i = 1; i <= n; i++){
        int b = inf.readInt(i, n);
        ensuref(lst <= b, "b[i - 1] > b[i]");
        lst = b;
        if(i < n) inf.readSpace();
        else inf.readEoln();
    }

	inf.readEof();
	return 0;
}
