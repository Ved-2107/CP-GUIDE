#include <iostream>

using namespace std;

/**
 * Codeforces 1806A - Walking Master
 * 
 * Problem: Starting at coordinate (a, b), reach target (c, d).
 *          Allowed moves:
 *            1. (x, y) -> (x + 1, y + 1) [diagonal up-right]
 *            2. (x, y) -> (x - 1, y)     [left]
 * Approach:
 *   - Move 1 is the ONLY move that changes the y-coordinate, and it only increases y.
 *     Therefore, we must have d >= b; otherwise, it is impossible.
 *   - The number of diagonal moves required is exactly (d - b).
 *   - After taking (d - b) diagonal moves, the x-coordinate becomes:
 *       a_new = a + (d - b).
 *   - From a_new, we can only decrease x using move 2.
 *     Therefore, we must have c <= a_new = a + (d - b).
 *   - If both conditions are satisfied, the total moves are:
 *       diagonal_moves = d - b
 *       left_moves = a + (d - b) - c
 *       total = 2 * (d - b) + a - c
 * Complexity:
 *   - Time: O(1) per testcase
 *   - Space: O(1)
 */

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d < b) {
        cout << -1 << "\n";
        return;
    }

    long long diagonal = d - b;
    long long final_x = a + diagonal;

    if (final_x < c) {
        cout << -1 << "\n";
        return;
    }

    long long left = final_x - c;
    cout << (diagonal + left) << "\n";
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
