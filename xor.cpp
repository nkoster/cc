#include <iostream>

using namespace std;

int main() {
    char p, k, c, d;
    srand(time(0));
    while ((p = cin.get()) != -1) {
        if (p == 10) p = 126;
        k = (rand() % 92) + 33;
        c = p ^ k;    //   crypt = plain XOR key
        d = c ^ k;    // decrypt = crypt XOR key
        if (d == 126) d = 10;
        cout << d;
    }
}