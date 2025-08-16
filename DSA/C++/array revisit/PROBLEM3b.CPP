#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to check if a number has all unique digits
bool hasUniqueDigits(long long num) {
    vector<bool> used(10, false);
    
    while (num > 0) {
        int digit = num % 10;
        if (used[digit]) {
            return false;  // Digit already used
        }
        used[digit] = true;
        num /= 10;
    }
    return true;
}

// Function to calculate sum of all n-digit numbers with unique digits
long long sumOfUniqueDigitNumbers(int n) {
    if (n < 1 || n > 10) {
        cout << "Invalid input! N must be between 1 and 10." << endl;
        return 0;
    }
    
    long long sum = 0;
    long long start = pow(10, n - 1);  // First n-digit number
    long long end = pow(10, n) - 1;    // Last n-digit number
    
    cout << "Checking numbers from " << start << " to " << end << endl;
    cout << "Numbers with unique digits:" << endl;
    
    int count = 0;
    for (long long i = start; i <= end; i++) {
        if (hasUniqueDigits(i)) {
            sum += i;
            count++;
            
            // Print first 20 numbers and last 10 for demonstration
            if (count <= 20 || count > (count - 10)) {
                cout << i << " ";
                if (count % 10 == 0) cout << endl;
            } else if (count == 21) {
                cout << "... (showing first 20 and will show last 10)" << endl;
            }
        }
    }
    
    cout << endl << "Total count of " << n << "-digit numbers with unique digits: " << count << endl;
    return sum;
}

// Alternative optimized approach using combinatorics and permutations
long long sumOfUniqueDigitNumbersOptimized(int n) {
    if (n < 1 || n > 10) {
        return 0;
    }
    
    if (n == 1) {
        // For 1-digit numbers: 1+2+3+4+5+6+7+8+9 = 45
        return 45;
    }
    
    // For n-digit numbers with unique digits:
    // We need to choose n digits from 0-9 and arrange them
    // such that the first digit is not 0
    
    long long sum = 0;
    
    // Calculate using mathematical approach
    // This is complex for general case, so we'll use the brute force
    // approach for clarity and correctness
    
    return sumOfUniqueDigitNumbers(n);
}

int main() {
    int n;
    
    cout << "=== Sum of N-Digit Numbers with Unique Digits ===" << endl;
    cout << "Enter the number of digits (1-10): ";
    cin >> n;
    
    if (n < 1 || n > 10) {
        cout << "Error: Please enter a number between 1 and 10." << endl;
        return 1;
    }
    
    cout << endl << "Calculating sum of all " << n << "-digit numbers with unique digits..." << endl;
    
    long long result = sumOfUniqueDigitNumbers(n);
    
    cout << endl << "=== RESULT ===" << endl;
    cout << "Sum of all " << n << "-digit numbers with unique digits: " << result << endl;
    
    // Additional information
    if (n == 1) {
        cout << "Note: 1-digit numbers are: 1, 2, 3, 4, 5, 6, 7, 8, 9" << endl;
    } else if (n == 2) {
        cout << "Note: Examples of 2-digit unique numbers: 10, 12, 13, ..., 98" << endl;
        cout << "      (excluding 11, 22, 33, 44, 55, 66, 77, 88, 99)" << endl;
    }
    
    return 0;
}