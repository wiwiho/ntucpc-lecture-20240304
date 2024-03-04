#include "testlib.h"

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);

    int n = inf.readInt();
    
    int mx = 0;
    set<int> st;
    for(int i = 1; i <= n; i++){
        int b = inf.readInt();
        int a = ouf.readInt(1, n, "a_i");
        mx = max(mx, a);
        if(st.find(a) != st.end()) quitf(_wa, "a_i duplicate");
        st.insert(a);
        if(mx != b) quitf(_wa, "b_i != max a_i");
    }

    quitf(_ok, "AC!");

}
