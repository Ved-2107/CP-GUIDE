#include <iostream>

using namespace std;

/**
 * CSES 2165 - Tower of Hanoi
 * 
 * Problem: Move n disks from peg 1 to peg 3 using peg 2 as auxiliary.
 *          Never place a larger disk on a smaller disk. Output minimum moves and sequence.
 * Approach:
 *   - The minimum number of moves is 2^n - 1.
 *   - Classic recursive divide-and-conquer:
 *       1. Move top n - 1 disks from 'from' to 'aux' using 'to'.
 *       2. Move the nth disk from 'from' to 'to'.
 *       3. Move top n - 1 disks from 'aux' to 'to' using 'from'.
 * Complexity:
 *   - Time: O(2^n)
 *   - Space: O(n) call stack depth
 */

void hanoi(int n, int from_peg, int to_peg, int aux_peg) {
    if (n == 0) return;
    hanoi(n - 1, from_peg, aux_peg, to_peg);
    cout << from_peg << " " << to_peg << "\n";
    hanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    cout << ((1 << n) - 1) << "\n";
    hanoi(n, 1, 3, 2);

    return 0;
}
