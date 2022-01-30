class Solution {
public:
    int divide(int A, int B) {
    if (A == INT_MIN && B == -1) return INT_MAX;
    if (A == INT_MIN && B == 1) return INT_MIN;
    if (B == INT_MIN) return A == INT_MIN;
    int a = abs(A), b = abs(B), res = 0, n = 0;
    if (A == INT_MIN){
        res = 1;
        a = abs(A + b);
    }
    while (a >= b){
        while ((b<<n) <= INT_MAX/2 && a >= (b<<n)) ++n;
        if (a < (b<<n)) --n;
        a -= b<<n;
        res += 1<<n;
        n = 0;
    }
    return (A >= 0) == (B >= 0)?res:-res;
}
};
