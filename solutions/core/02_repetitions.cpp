#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/**
 * CSES 1069 - Repetitions
 * 
 * Problem: Given a DNA string, find the length of the longest substring containing only one character.
 * Approach:
 *   - Keep a running count of the current character streak.
 *   - Whenever the character changes, update the global maximum and reset streak to 1.
 * Complexity:
 *   - Time: O(n)
 *   - Space: O(1) auxiliary (or O(n) to store string)
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    int max_len = 1;
    int current_len = 1;

    for (size_t i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            current_len++;
        } else {
            max_len = max(max_len, current_len);
            current_len = 1;
        }
    }
    max_len = max(max_len, current_len);

    cout << max_len << "\n";
    return 0;
}
