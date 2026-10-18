#include <iostream>

using namespace std;

/**
 * CSES 1072 - Two Knights
 * 
 * Problem: For k = 1, 2, ..., n, count how many ways two knights can be placed on a k x k
 *          chessboard so that they do not attack each other.
 * Approach:
 *   - Total squares on a k x k board: k^2.
 *   - Total ways to place two distinct knights:
 *       Total = C(k^2, 2) = (k^2 * (k^2 - 1)) / 2.
 *   - Two knights attack each other if they occupy opposite corners of a 2x3 or 3x2 rectangle.
 *   - Each 2x3 rectangle contains 2 attacking pairs of knights.
 *   - Number of 2x3 rectangles on a k x k board: (k - 1) * (k - 2).
 *   - Number of 3x2 rectangles on a k x k board: (k - 2) * (k - 1).
 *   - Total attacking pairs:
 *       Attacking = 2 * [(k - 1) * (k - 2) + (k - 2) * (k - 1)] = 4 * (k - 1) * (k - 2).
 *   - Non-attacking placements:
 *       Answer = Total - Attacking = (k^2 * (k^2 - 1)) / 2 - 4 * (k - 1) * (k - 2).
 * Complexity:
 *   - Time: O(n) to compute for all k from 1 to n.
 *   - Space: O(1)
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    for (long long k = 1; k <= n; ++k) {
        long long total_pairs = (k * k) * (k * k - 1) / 2;
        long long attacking_pairs = 4 * (k - 1) * (k - 2);
        cout << (total_pairs - attacking_pairs) << "\n";
    }

    return 0;
}
