#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * CSES 1094 - Increasing Array
 * 
 * Problem: Given an array of n integers, find minimum operations to make the array non-decreasing.
 *          In each operation, you can increase any element by 1.
 * Approach:
 *   - Iterate from left to right.
 *   - For each element a[i], if a[i] < a[i - 1], we must increase it to at least a[i - 1].
 *   - Accumulate (a[i - 1] - a[i]) moves and set a[i] = a[i - 1].
 *   - Total moves can exceed 2^31 - 1, so use 64-bit integer (`long long`).
 * Complexity:
 *   - Time: O(n)
 *   - Space: O(1) auxiliary (streaming input)
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    long long prev_val;
    cin >> prev_val;

    long long total_moves = 0;
    for (int i = 1; i < n; ++i) {
        long long curr_val;
        cin >> curr_val;
        if (curr_val < prev_val) {
            total_moves += (prev_val - curr_val);
        } else {
            prev_val = curr_val;
        }
    }

    cout << total_moves << "\n";
    return 0;
}
