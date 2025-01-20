#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

// Function to parse a 3x3 grid into a digit matrix
vector<vector<string>> parse_7_segment(const vector<string> &matrix) {
    vector<vector<string>> digit_patterns(10, vector<string>(3));
    for (int i = 0; i < 3; i++) { // Each row
        for (int d = 0; d < 10; d++) { // Each digit
            digit_patterns[d][i] = matrix[i].substr(d * 3, 3);
        }
    }
    return digit_patterns;
}

// Function to check if two digit grids can transform with at most one toggle
bool can_transform(const vector<string> &a, const vector<string> &b) {
    int mismatches = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] != b[i][j]) {
                mismatches++;
                if (mismatches > 1) return false;
            }
        }
    }
    return true;
}

// Main function
int main() {
    vector<string> digit_input(3); // 7-segment patterns for 0-9
    vector<string> faulty_input(3); // Faulty number patterns
    for (int i = 0; i < 3; i++) cin >> digit_input[i];
    for (int i = 0; i < 3; i++) cin >> faulty_input[i];
    
    // Parse 7-segment display for digits 0-9
    vector<vector<string>> digit_patterns = parse_7_segment(digit_input);
    
    // Parse the faulty number digits
    int num_digits = faulty_input[0].size() / 3;
    vector<vector<string>> faulty_digits(num_digits, vector<string>(3));
    for (int d = 0; d < num_digits; d++) {
        for (int i = 0; i < 3; i++) {
            faulty_digits[d][i] = faulty_input[i].substr(d * 3, 3);
        }
    }

    // Generate all possible numbers and calculate their sum
    long long total_sum = 0;
    long long factor = 1; // To calculate value positions
    for (int pos = num_digits - 1; pos >= 0; pos--) {
        vector<int> valid_numbers;
        for (int d = 0; d < 10; d++) {
            if (can_transform(faulty_digits[pos], digit_patterns[d])) {
                valid_numbers.push_back(d);
            }
        }
        
        // Add contributions from this digit
        long long sum_for_pos = 0;
        for (int d : valid_numbers) {
            sum_for_pos += d * factor;
        }
        total_sum += sum_for_pos;
        factor *= 10; // Move to the next positional multiplier
    }

    cout << total_sum << endl;
    return 0;
}
