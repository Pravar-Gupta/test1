#include <iostream>
using namespace std;

bool canFormTriangle(long long n, long long m, long long k) {

    long long T = (n * m) / k;
    

    if ((n * m) % k != 0) {
        return false;
    }
    

    if (T > 1000000000) {
        return false;
    }


    return true;
}

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    if (canFormTriangle(n, m, k)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
