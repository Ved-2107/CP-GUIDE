#include <iostream>

using namespace std;

/**
 * CSES 1068 - Weird Algorithm (Collatz Conjecture)
 * 
 * Problem: Given n, if n is even, divide by 2; if odd, multiply by 3 and add 1.
 *          Repeat until n becomes 1. Print all intermediate values.
 * Note:
 *   - Intermediate values 3*n + 1 can exceed 2^31 - 1, leading to 32-bit integer overflow.
 *   - Always use 64-bit integers (`long long`) to prevent overflow.
 * Complexity:
 *   - Time: Depends on Collatz sequence length (very small for n <= 10^6).
 *   - Space: O(1)
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << 1 << "\n";

    return 0;
}
