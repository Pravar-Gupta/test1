#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool advance(int B, vector<int>& zarr) {
    sort(zarr.begin(), zarr.end());
    for (int i = 0; i < zarr.size(); i++) {
        B = B - (zarr[i] % 2 + zarr[i] / 2);
        if (B < 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int B, N;
    cin >> B >> N;

    vector<int> zarr(N);

    for (int i = 0; i < N; i++) {
        cin >> zarr[i];
    }

    if (advance(B, zarr)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
