#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        std::string current;
        current.reserve(2 * n); // Pre-allocate memory to avoid reallocations
        
        backtrack(result, current, 0, 0, n);
        return result;
    }

private:
    void backtrack(std::vector<std::string>& result, std::string& current, int open, int close, int n) {
        // Base case: string reached full length (n pairs)
        if (current.length() == 2 * n) {
            result.push_back(current);
            return;
        }

        // Place an opening parenthesis if we haven't used all n
        if (open < n) {
            current.push_back('(');
            backtrack(result, current, open + 1, close, n);
            current.pop_back(); // Backtrack
        }

        // Place a closing parenthesis if it wouldn't exceed open parentheses
        if (close < open) {
            current.push_back(')');
            backtrack(result, current, open, close + 1, n);
            current.pop_back(); // Backtrack
        }
    }
};