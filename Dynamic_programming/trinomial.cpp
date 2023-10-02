#include <iostream>
#include <vector>

class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        std::vector<int> dp(n + 1);

        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

   
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }

        return dp[n];
    }
};

int main() {
    Solution solution;
    int n = 5;
    int result = solution.tribonacci(n);
    std::cout << "Tribonacci(" << n << ") = " << result << std::endl;
    return 0;
}
