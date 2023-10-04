#include <iostream>
#include <climits>

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) {
            // Handle division by zero
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0; // You can choose an appropriate value to return in this case
        }
        
        // Handle the special case where dividend is INT_MIN and divisor is -1
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        
        // Handle potential overflow by converting both dividend and divisor to long long
        long long ldividend = static_cast<long long>(dividend);
        long long ldivisor = static_cast<long long>(divisor);
        
        // Determine the sign of the result
        int sign = (ldividend < 0) ^ (ldivisor < 0) ? -1 : 1;
        
        // Make dividend and divisor positive for the calculation
        ldividend = std::abs(ldividend);
        ldivisor = std::abs(ldivisor);
        
        // Perform integer division
        long long result = 0;
        while (ldividend >= ldivisor) {
            long long temp = ldivisor;
            long long multiple = 1;
            while (ldividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            ldividend -= temp;
            result += multiple;
        }
        
        // Apply the sign to the result
        result *= sign;
        
        // Check for integer overflow
        if (result > INT_MAX || result < INT_MIN) {
            return INT_MAX;
        }
        
        return static_cast<int>(result);
    }
};

int main() {
    Solution solution;
    int dividend = 10;
    int divisor = 3;
    int result = solution.divide(dividend, divisor);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
