#include <iostream>

using namespace std;

/**
 * Codeforces 1814A - Coins
 * 
 * Problem: Given integer n and coin denominations 2 and k, can we form n using 2x + ky = n
 *          for non-negative integers x, y >= 0? (Constraints: 1 <= k <= n <= 10^18)
 * Approach:
 *   - If n is even, we can always form it using (n / 2) coins of value 2. -> YES
 *   - If n is odd:
 *       - If k is even: 2x + ky is always even, so it can never equal odd n. -> NO
 *       - If k is odd: since k <= n, we can take one coin of value k (y = 1).
 *         Then n - k is even and non-negative, which can be formed with (n - k) / 2 coins of value 2. -> YES
 * Complexity:
 *   - Time: O(1) per test case
 *   - Space: O(1)
 */

void solve() {
    long long n, k;
    cin >> n >> k;

    if (n % 2 == 0) {
        cout << "YES\n";
    } else if (k % 2 == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
