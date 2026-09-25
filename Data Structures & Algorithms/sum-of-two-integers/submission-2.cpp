class Solution {
public:
    int getSum(int a, int b) {
        int carry = 0;
        while (b) {
            carry = a & b;  // carry generate
            a = a ^ b;          // carry propagate
            b = (unsigned)carry << 1;
        }
        return a;
    }
};