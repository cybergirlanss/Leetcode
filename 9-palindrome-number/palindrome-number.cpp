class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int reversed = 0;
        int duplicate = x; // Store the original value of x

        while (x != 0) {
            int digit = x % 10;
            x = x / 10;

            // Check for overflow (though not necessary for this problem)
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
                return false;
            }

            reversed = reversed * 10 + digit;
        }

        // Check if the reversed number matches the original
        return (duplicate == reversed);
    }
};