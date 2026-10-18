#include <iostream>
#include <algorithm>

using namespace std;

/**
 * Codeforces 1808A - Lucky Numbers
 * 
 * Problem: For a given range [l, r], find an integer x such that the difference between
 *          its largest and smallest decimal digits is maximized.
 * Approach:
 *   - The maximum possible difference is 9 (e.g. digits 9 and 0).
 *   - Within any window of 100 consecutive numbers, there is guaranteed to be a number
 *     with luckiness 9 (e.g., a number ending in 90 or having 9 and 0).
 *   - Therefore, iterating from l to min(r, l + 100) is sufficient to find the optimal or near-optimal answer.
 * Complexity:
 *   - Time: O(min(r - l + 1, 100) * log10(r)) per test case
 *   - Space: O(1)
 */

int get_luckiness(int x) {
    int max_d = 0;
    int min_d = 9;
    while (x > 0) {
        int d = x % 10;
        max_d = max(max_d, d);
        min_d = min(min_d, d);
        x /= 10;
    }
    return max_d - min_d;
}

void solve() {
    int l, r;
    cin >> l >> r;

    int best_val = l;
    int max_luck = -1;

    for (int i = l; i <= r; ++i) {
        int luck = get_luckiness(i);
        if (luck > max_luck) {
            max_luck = luck;
            best_val = i;
        }
        if (max_luck == 9) {
            break; // Maximum possible difference achieved
        }
    }

    cout << best_val << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
