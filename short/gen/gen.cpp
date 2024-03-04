#include "jngen.h"

#include <bits/stdc++.h>

using namespace std;

#define StarBurstStream ios_base::sync_with_stdio(false); cin.tie(0);
#define iter(a) a.begin(), a.end()
#define pb(a) emplace_back(a)
#define SZ(a) int(a.size())

int main(int argc, char* argv[]){
    StarBurstStream;

    registerGen(argc, argv);

    int n = atoi(argv[1]);
    int seg = atoi(argv[2]);
    int c = atoi(argv[3]);

    Array nums(n - 1);
    iota(iter(nums), 1);

    Array tmp = nums.choice(seg - 1);
    tmp.pb(n);
    sort(iter(tmp));

    Array b;
    int l = 1;
    for(int id = 0; id < seg; id++){
        int i = tmp[id];
        l = max(l, i);
        int now = rnd.wnext(l, n - (seg - id - 1), c);
        while(SZ(b) < i) b.pb(now);
        l = now + 1;
    }

    cout << b.printN() << "\n";

    return 0;
}
