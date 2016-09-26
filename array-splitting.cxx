#include <set>
#include <iostream>

using namespace std;

int depth(set<long long> &sums, long long s, long long e, int d) {
    if ((s + e) % 2 == 0) {
        long long m = (s + e) / 2;
        if (sums.find(m) != sums.end()) {
            return max(depth(sums, s, m, d), depth(sums, m, e, d)) + 1;
        }
    }
    return d;
}

int main() {
    int t;
    cin >> t;
    for (; t; --t) {
        int n;
        cin >> n;
        set<long long> sums;
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            long num;
            cin >> num;
            if (num > 0) {
                sum += num;
                sums.insert(sum);
            }
        }
        if (sums.size()) {
            cout << depth(sums, 0, sum, 0) << endl;
        } else {
            cout << n - 1 << endl;
        }
    }
    return 0;
}
