#include <iostream>
#include <algorithm>

using namespace std;

/**
 * CSES 1754 - Coin Piles
 * 
 * Problem: Two coin piles of size a and b. In each step, you can remove 1 coin from one pile
 *          and 2 coins from the other. Determine if it is possible to empty both piles.
 * Approach:
 *   - Each operation reduces the total number of coins by 3.
 *     Hence, (a + b) must be divisible by 3.
 *   - In the most extreme case of removing 2 from pile a and 1 from pile b, pile a is reduced
 *     twice as fast as b. Therefore, neither pile can exceed twice the other:
 *     a <= 2 * b and b <= 2 * a.
 *   - If both conditions hold, the piles can always be emptied completely.
 * Complexity:
 *   - Time: O(1) per query
 *   - Space: O(1)
 */

void solve() {
    long long a, b;
    cin >> a >> b;

    if ((a + b) % 3 == 0 && a <= 2 * b && b <= 2 * a) {
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
