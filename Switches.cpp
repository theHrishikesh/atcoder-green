#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<ll> A(M);
    vector<int> b(M);

    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        ll mask = 0;
        while (k--) {
            int s;
            cin >> s;
            --s;
            mask |= (1LL << s);
        }
        A[i] = mask;
    }

    for (int i = 0; i < M; i++) cin >> b[i];

    int rank = 0;

    // Gaussian elimination over GF(2)
    for (int col = 0; col < N && rank < M; col++) {
        int pivot = -1;
        for (int row = rank; row < M; row++) {
            if (A[row] & (1LL << col)) {
                pivot = row;
                break;
            }
        }
        if (pivot == -1) continue;

        swap(A[pivot], A[rank]);
        swap(b[pivot], b[rank]);

        // eliminate this column from all other rows
        for (int row = 0; row < M; row++) {
            if (row != rank && (A[row] & (1LL << col))) {
                A[row] ^= A[rank];
                b[row] ^= b[rank];
            }
        }

        rank++;
    }

    // check contradiction: 0 = 1
    for (int i = rank; i < M; i++) {
        if (A[i] == 0 && b[i] == 1) {
            cout << 0 << "\n";
            return 0;
        }
    }

    // number of solutions
    ll ans = 1LL << (N - rank);
    cout << ans << "\n";
}
