#include <iostream>

using namespace std;

/**
 * CSES 1083 - Missing Number
 * 
 * Problem: You are given all numbers between 1, 2, ..., n except one. Find the missing number.
 * Approach:
 *   - The sum of numbers from 1 to n is n * (n + 1) / 2.
 *   - Subtract each given number from this expected sum.
 *   - The remainder is the missing number.
 * Complexity:
 *   - Time: O(n)
 *   - Space: O(1)
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    long long expected_sum = n * (n + 1) / 2;
    long long actual_sum = 0;

    for (int i = 0; i < n - 1; ++i) {
        long long x;
        cin >> x;
        actual_sum += x;
    }

    cout << (expected_sum - actual_sum) << "\n";
    return 0;
}
