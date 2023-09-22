#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Solution {
public:
    std::string multiply(std::string num1, std::string num2) {
        if (num1 == "0" || num2 == "0") {
            return "0";
        }

        int len1 = num1.size();
        int len2 = num2.size();
        vector<int> result(len1 + len2, 0);

        for (int i = len1 - 1; i >= 0; i--) {
            for (int j = len2 - 1; j >= 0; j--) {
                int product = (num1[i] - '0') * (num2[j] - '0');
                int sum = product + result[i + j + 1];
                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        std::string multiplication;
        for (int digit : result) {
            multiplication.push_back(digit + '0');
        }

        if (multiplication[0] == '0') {
            multiplication.erase(0, 1);
        }

        return multiplication;
    }
};

int main() {
    Solution solution;
    string num1 = "123";
    string num2 = "456";
    string result = solution.multiply(num1, num2);
    cout << "Multiplication result: " << result << std::endl;

    return 0;
}
